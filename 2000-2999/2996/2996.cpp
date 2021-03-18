//https://www.e-olymp.com/ru/problems/2996
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int dfs(int node, int parr, vector<vector<int>> &ss, vector<int> &v)
{
    int ans = v[node];

    int mn = 1e5;
    for(auto chield : ss[node])
        if(chield != parr)
            mn = min(mn, dfs(chield, node, ss, v));
    ans += (mn == 1e5 ? 0 : mn);
    return ans;
}

void solve()
{
    int n;
    cin >> n;

    vector<vector<int>> ss(n);
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        int k;
        cin >> v[i] >> k;
        for(int j = 0; j < k; j++)
        {
            int cur;
            cin >> cur;
            --cur;
            ss[i].push_back(cur);
            ss[cur].push_back(i);
        }
    }

    cout << dfs(0, -1, ss, v);
}

int main()
{
    //cout.setf(std::ios::fixed); cout.precision(6);
    solve();
    return 0;
}