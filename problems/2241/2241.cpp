// https://www.e-olymp.com/ru/problems/2241
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int k, b;
    cin >> k >> b;
    k = k * 100 + k;
    b = b * 100 + b;

    if(b == 0)
    {
        cout << "NO";
        return;
    }

    for(int i = 1; i <= 500; i++)
    {
        int sm = (i * 100 - k);
        if(sm >= 0 && sm % b == 0 && b != 0)
        {
            cout << "YES\n" << sm / b;
            return;
        }
    }
    cout << "NO";
}

int main()
{
    //cout.setf(std::ios::fixed); //cout.precision(2);
    solve();
    //int t; cin >> t; while (t--) solve();
    return 0;
}