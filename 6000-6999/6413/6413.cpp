//https://www.e-olymp.com/ru/problems/6413
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    //cout.setf(std::ios::fixed);
    //cout.precision(6);

    ll n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        for(int j = 0; j < b; j++)
        {
            ll c, d;
            cin >> c >> d;
            a += c * d;
        }
        cout << a << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //string cur; int t; cin >> t; getline(cin,cur); while (t--) solve();

    return 0;
}