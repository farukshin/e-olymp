// https://www.e-olymp.com/ru/problems/504
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

string s;

void unused(int l, int r, int & ans,  vector<bool> &used)
{
    for(int i = max(0, l); i <= min(r, int(s.size() - 1)); i++)
        if(!used[i])
            used[i] = true, ans--;
}

void solve()
{
    cin >> s;
    vector<bool> used(s.size(), false);
    int ans = s.size();

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'D' && !used[i])
            unused(i, i, ans, used);
        else if(s[i] == 'B')
            unused(i - 2, i, ans, used);
        else if(s[i] == 'S')
            unused(i - 1, i + 1, ans, used);
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    //solve();
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}