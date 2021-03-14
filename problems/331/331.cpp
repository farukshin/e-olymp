//https://www.e-olymp.com/ru/problems/331
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void fmt(string &s)
{
    string del = "?.,!?;:'";
    for(int i = 0; i < s.size(); i++)
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] = 'a' + (s[i] - 'A');
    int l = 0, r = s.length();
    for(l = 0; l < s.length(); l++)
        if(s[l] >= 'a' && s[l] <= 'z' || s[l] >= '0' && s[l] <= '9')
            break;
    for(r = s.length() - 1; r >= 0; r--)
        if(s[r] >= 'a' && s[r] <= 'z' || s[r] >= '0' && s[r] <= '9')
            break;
    if(l > r)
        s = "";
    else
        s = s.substr(l, r - l + 1);
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    string s;
    int ans = 0, k = -1, curK = 0, predl = 1;
    set<char> st;
    st.insert('?');
    st.insert('.');
    st.insert('!');

    while(cin >> s)
    {
        //getline(cin,s);
        bool kon = st.count(s[s.length() - 1]) > 0;
        fmt(s);

        if(s != "")
        {
            string r = s;
            reverse(r.begin(), r.end());
            if(r == s)
                curK++;
        }

        if(kon)
        {
            if(k < curK)
                k = curK, ans = predl;
            curK = 0, predl++;
        }

    }
    //cout<< ans << " " << k << endl;
    cout << (k == 0 ? 0 : ans) << endl;
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