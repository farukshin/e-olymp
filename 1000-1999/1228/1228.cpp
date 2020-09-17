//https://www.e-olymp.com/ru/problems/1228
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

void solve()
{
    priority_queue<ll> q;
    ll n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        ll cur;
        cin >> cur;
        q.push(-cur);
    }

    ll ans = 0, a = 0, b = 0;
    while (!q.empty())
    {
        a = q.top();
        q.pop();
        if (q.empty())
            break;
        b = q.top();
        q.pop();
        ans -= a + b;
        q.emplace(a + b);
    }
    cout << ans << endl;
}

int main()
{
    ios_b;
#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif
    solve();
    return 0;
}
