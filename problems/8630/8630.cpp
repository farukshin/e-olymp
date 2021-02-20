//https://www.e-olymp.com/ru/problems/8630
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(1);

    string s;
    cin >> s;
    int ans=0;

    for (auto ch : s)
        if (ch >= '0' && ch <= '9')
            if(ans< (ch - '0'))
            	ans = (ch - '0');
            
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
    //int t; cin >> t; while(t--) solve();

    return 0;
}