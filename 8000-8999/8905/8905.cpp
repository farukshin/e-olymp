//https://www.e-olymp.com/ru/problems/8905
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

double log3(double x)
{
    static double ln3 = log(3.);
    return log(x) / ln3;
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    ll n;
    cin >> n;
    n--;
    while(n % 2 == 0 || n % 3 == 0 || n % 5 == 0)
        n--;

    cout << n << endl;
}


int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}