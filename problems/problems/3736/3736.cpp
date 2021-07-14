// https://www.e-olymp.com/ru/problems/3736
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

vector<int> parent;
vector<int> rang;

void solve()
{
    int n, m;
    cin >> n >> m;

    priority_queue<pair<ld, pair<int, int>>> q;
    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        ld w = 1.0 * a / b;
        q.push({w, {a, b}});
    }

    int need = m;
    ld ans = 0.0;
    while(!q.empty())
    {
        auto cur = q.top();
        q.pop();
        ld w = cur.first;
        int a = cur.second.first;
        int b = cur.second.second;
        if(b <= need)
            ans += a, need -= b;
        else
        {
            ans += w * need;
            need = 0;
            break;
        }
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(3);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}