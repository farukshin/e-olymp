// https://www.e-olymp.com/ru/problems/2608
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;

    ld ans = log2(n);
    if(floor(ans) == ans)
        cout << "I=" << int(ans);
    else
        cout << int(trunc(ans)) << "<I<" << int(ceil(ans));
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