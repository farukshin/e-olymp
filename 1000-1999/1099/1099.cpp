//https://www.e-olymp.com/ru/problems/1099
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    //cout.setf(std::ios::fixed);
    //cout.precision(6);

    map <string, int> mp;
    map <string, int> mp2;
    int n, m, ans1 = 0, ans2 = 0;
    cin >> n >> m;
    string s, s2;
    while(cin >> s)
    {
        if(s.back() == ',')
            s.pop_back();
        s2 = s2 + s;
        if(s.back() == '.' || s.back() == '?' || s.back() == '!')
        {
            s.pop_back();
            s2.pop_back();
            mp[s2]++;
            if(mp[s2] == m)
                ans2++;
            s2 = "";
        }
        mp2[s]++;
        if(mp2[s] == n)
            ans1++;
    }
    cout << ans1 << ' ' << ans2 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //string cur; int t; cin >> t; getline(cin,cur); while (t--) solve();

    return 0;
}