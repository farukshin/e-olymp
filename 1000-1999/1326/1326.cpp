//https://www.e-olymp.com/ru/problems/1326
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int N;
    cin >> N;
    if (N < 3)
        cout << N;
    else
        cout << (N * (N - 1) * (N - 2));
    //ll ans = int()sting(k, to_string(n));
    //cout << ans * ans << endl;


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