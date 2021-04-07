// https://www.e-olymp.com/ru/problems/10225
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    if(a > b) swap(a, b);
    if(a > c) swap(a, c);
    if(b > c) swap(b, c);

    if(c >= a + b)
        cout << 0;
    else if(a == b && b == c && a == c)
        cout << 3;
    else if(a == b || b == c)
        cout << 2;
    else
        cout << 1;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    // cout.setf(std::ios::fixed); cout.precision(2);

    solve();
    return 0;
}