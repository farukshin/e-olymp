//https://www.e-olymp.com/ru/problems/6199
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    ll n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        ll cur;
        cin >> cur;
        cout << cur << " is " << (cur % 2 == 0 ? "even\n" : "odd\n");
    }

}

int main()
{
    //cout.setf(std::ios::fixed); cout.precision(6);
    solve();
    return 0;
}