//https://www.e-olymp.com/ru/problems/912
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

bool endSimv(char ch)
{
    if (ch == '.' || ch == '!' || ch == '?')
        return true;
    else
        return false;
}
void solve()
{
    string s;
    getline(cin, s);

    bool curPred = false;
    int ans = 0;

    for (char ch : s)
        if (!endSimv(ch)  && !curPred)
            curPred = true, ans++;
        else if (endSimv(ch))
            curPred = false;

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
