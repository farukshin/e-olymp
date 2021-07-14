// https://www.e-olymp.com/ru/problems/995
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const int MAXARR = 105;
ll len = INT_MAX;
vector<int> ans(3, 0);
vector<vector<ll>> v(MAXARR, vector<ll>(MAXARR));
vector<vector<pair<ll, int>>> ss(MAXARR);


void dfs(int node, int start, int step, ll curLen)
{
    if(step == 2 && v[node][start] && curLen + v[node][start] < len)
        len = curLen + v[node][start], ans[0] = start, ans[2] = node;

    if(step == 2) return;

    for(auto chield : ss[node])
        if(chield.second != node && v[node][chield.second] && v[node][chield.second] + curLen < len)
            dfs(chield.second, start, step + 1, v[node][chield.second] + curLen);
}

void solve()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            cin >> v[i][j];
            if(v[i][j])
                ss[i].push_back({v[i][j], j}), ss[j].push_back({v[i][j], i});
        }


    for(int i = 0; i < n; i++)
        dfs(i, i, 0, 0);

    if(len == -1)
    {
        cout << -1;
        return;
    }

    for(int i = 0; i < n; i++)
        if(i != ans[0] && i != ans[2] && v[ans[0]][i] + v[ans[2]][i] + v[ans[2]][ans[0]] == len)
        {
            cout << ans[0] + 1 << " " << i + 1 << " " << ans[2] + 1;
            break;
        }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(2);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}