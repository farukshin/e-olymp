// https://www.e-olymp.com/ru/problems/6022
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, ans = 0;
    cin >> n;

    while(n--)
    {
        string s;
        cin >> s;

        bool success = true;
        for(int i = 0; i < s.size() - 1 && success; i++)
            if(s[i] == 'C' && s[i + 1] == 'D')
                success = false;
        ans += (success ? 1 : 0);
    }

    cout << ans;

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