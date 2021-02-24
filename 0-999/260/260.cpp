//https://www.e-olymp.com/ru/problems/260
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;



void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end(), greater<int>());

    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    //cout << gcd(n, m) << endl;;

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}