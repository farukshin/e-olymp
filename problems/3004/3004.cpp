//https://www.e-olymp.com/ru/problems/3004
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    ll n, k;
    cin >> n >> k;
    queue<ll> q;

    for (int i = 0; i < n; i++)
    {
        ll p;
        cin >> p;
        q.push(p);
        //cout << "add q " << p << endl;
    }

    priority_queue<ll, vector<ll>, greater<ll>> kassa;
    for (int i = 0; i < min(k, n); i++)
    {
        ll cur = q.front();
        q.pop();
        kassa.push(cur);
        //cout << "load kassa " << cur << endl;
    }

    while (!q.empty())
    {
        ll cur = q.front();
        q.pop();

        ll curKassa = kassa.top();
        kassa.pop();

        kassa.push(cur + curKassa);

        //cout << "add kassa " << cur + curKassa << endl;
    }

    ll ans = 0;
    while (!kassa.empty())
    {
        ans = kassa.top();
        kassa.pop();
        //cout << "download kassa " << ans << endl;
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}