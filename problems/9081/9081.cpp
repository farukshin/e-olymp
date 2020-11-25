//https://www.e-olymp.com/ru/problems/9081
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(4);

    ll v1, v2, v3, t1, t2, t3;
    cin >> v1 >> t1 >> v2 >> t2 >> v3 >> t3;

    ll maxS = -1;
    ll s1 = v1 * t1;
    ll s2 = v2 * t2;
    ll s3 = v3 * t3;
    maxS = max(maxS, s1);
    maxS = max(maxS, s2);
    maxS = max(maxS, s3);

    if (s1 == maxS)
        cout << 1 << " ";
    if (s2 == maxS)
        cout << 2 << " ";
    if (s3 == maxS)
        cout << 3 << " ";

    cout << endl;
    //cout << b + c - a << endl;
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