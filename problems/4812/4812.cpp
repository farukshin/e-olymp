// https://www.e-olymp.com/ru/problems/4812
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ld x;
    while(cin >> x)
    {
        ld res = sin(x) + sqrt(log2(3 * x) / 2) + ceil(3 * exp(x));
        cout << res << "\n";
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(6);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}