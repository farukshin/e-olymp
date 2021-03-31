// https://www.e-olymp.com/ru/problems/5051
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int a, b, a1;
    cin >> a >> b;
    a1 = a;
    a1 = a1 << 5;
    a = a << 2;
    b = b >> 4;
    a += a1 + b;
    a = a & 31;
    cout << a;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    // cout.setf(std::ios::fixed); cout.precision(2);

    solve();
    return 0;
}