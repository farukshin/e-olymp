// https://www.e-olymp.com/ru/problems/10054
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll n;
    cin >> n;

    int k = 0;
    int kol = 0;
    while(n)
    {
        if((n & 1) == 1) k++;
        kol++;
        n = n >> 1;
    }
    ll a = 0, b = 0;

    for(int i = 0; i < k; i++)
        a = (a << 1) + 1;
    b = a;
    for(int i = 0; i < (kol - k); i++)
        b = (b << 1);
    cout << b - a;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin >> t; while(t--) solve();
    return 0;
}