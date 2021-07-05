// https://www.e-olymp.com/ru/problems/5718
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    int k1 = 0, k0 = 0;

    while(n)
    {
        if(n & 1) k1++;
        else k0++;
        n = n >> 1;
    }
    int a = 0, b = 0;
    while(k1--)
        a = (a << 1) + 1, b = (b << 1) + 1;

    while(k0--)
        a = (a << 1);
    cout << a - b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(6);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}