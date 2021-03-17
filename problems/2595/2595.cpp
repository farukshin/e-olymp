// https://www.e-olymp.com/ru/problems/2595
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int pol = k / n;
    // int otxod = k-n*pol;
    // cout<< "pol=" <<pol<<" otxod="<<otxod<<"\n";
    int ans1 = ceil(1.0 * m / pol);

    cout << ans1 << " " << ans1*k - m*n;
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