// https://www.e-olymp.com/ru/problems/7335
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, m;
    cin >> n >> m;
    priority_queue<int> q1, q2;
    int cur;
    for(int i = 0; i < n; i++)
        cin >> cur, q1.push(cur);
    for(int i = 0; i < m; i++)
        cin >> cur, q2.push(cur);
    int ans = 0;
    while(!q1.empty())
    {
        auto c = q1.top();
        q1.pop();
        if(!q2.empty() && c <= q2.top())
            ans++, q2.pop();
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin >> t; while(t--) solve();
    return 0;
}