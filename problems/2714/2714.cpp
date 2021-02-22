//https://www.e-olymp.com/ru/problems/2714
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);
    string s;
    int n, m;
    cin >> s >> n >> m;
    int a = 0, b = 0;
    for(auto ch : s)
        if(ch >= 'a' && ch <= 'z')
            a++;
        else if(ch >= 'A' && ch <= 'Z')
            b++;

    ll ans = min(a * n, b * m);
    cout << ans << endl;
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