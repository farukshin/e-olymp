//https://www.e-olymp.com/ru/problems/653
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
        cout << "IMPOSSIBLE";
    else if (c * c < a * a + b * b)
        cout << "ACUTE";
    else if (c * c == a * a + b * b)
        cout << "RIGHT";
    else if (c * c > a * a + b * b)
        cout << "OBTUSE";
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(2);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}