// https://www.e-olymp.com/ru/problems/932
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int S, a;
    int d;
    double h, dk;
    cin >> S >> a;
    d = a * a + 8 * S;
    dk = sqrt(d);
    h = (-a + dk) / 2;
    printf("%.2f", h);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(2);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}