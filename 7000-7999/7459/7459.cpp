//https://www.e-olymp.com/ru/problems/7459
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    n = abs(n);
    string s = to_string(n);
    int p = 1;
    for (int i = 0; i < s.size(); i++)
    {
        auto ch = s[i];
        if (ch >= '0' && ch <= '9' && i % 2 == 0)
            p *= ch - '0';
    }

    cout << p << endl;
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
