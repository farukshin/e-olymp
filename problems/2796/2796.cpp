//https://www.e-olymp.com/ru/problems/2796
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

string mxStr(string s1, string s2)
{
    if(s1.length() != s2.length())
        return (s1.length() > s2.length() ? s1 : s2 );

    for(int i = 0; i < s1.length(); i++)
        if(s1[i] != s2[i])
            return (s1[i] > s2[i] ? s1 : s2 );

    return s1;
}

string del(string s, int i)
{
    string res = s.substr(0, i) + s.substr(i + 1);
    int k = -1;
    while(res[k + 1] == '0')
        k++;

    if(k >= 0)
        res = s.substr(k + 1);

    return res;
}

void solve()
{
    //cout.setf(std::ios::fixed);
    //cout.precision(15);

    string s;
    cin >> s;
    string ans = "0";
    for(int i = 0; i < s.length(); i++)
        ans = mxStr(ans, del(s, i));
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
    //int t; cin >> t; while (t--) solve();

    return 0;
}