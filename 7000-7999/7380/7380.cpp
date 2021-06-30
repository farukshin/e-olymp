// https://www.e-olymp.com/ru/problems/7380
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, m;
    cin >> n >> m;

    priority_queue<int, vector<int>, greater<int>> qm;
    priority_queue<int, vector<int>, greater<int>> qd;
    int cur;

    for(int i = 0; i < n; i++)
        cin >> cur, qm.push(cur);
    for(int i = 0; i < m; i++)
        cin >> cur, qd.push(cur);

    ll ans = 0;
    while(!qm.empty() && !qd.empty())
    {
        while(!qm.empty() && qm.top() < qd.top())
            qm.pop();
        if(!qm.empty() && !qd.empty() && qm.top() >= qd.top())
            ans++, qm.pop(), qd.pop();
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}