//https://www.e-olymp.com/ru/problems/909
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s;
    getline(cin, s);

    bool curWorld = false;
    int ans = 0;

    for (char ch : s)
        if (ch != ' ' && !curWorld)
            curWorld = true, ans++;
        else if (ch == ' ')
            curWorld = false;

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
