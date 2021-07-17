// https://www.e-olymp.com/ru/problems/1227
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

string fmt(string s)
{

    int l = 0, r = s.length() - 1;
    while(!(s[l] >= 'a' && s[l] <= 'z'))
        l++;
    while(!(s[r] >= 'a' && s[r] <= 'z'))
        r--;
    if(r >= l)
        return s.substr(l, r - l + 1);
    else
        return "";
}

void solve()
{
    string s;
    set<string> st;

    while(cin >> s)
    {
        transform(s.begin(), s.end(), s.begin(),
                  [](unsigned char c)
        {
            return std::tolower(c);
        });
        string cur = "";
        for(auto ch : s)
            if(ch >= 'a' && ch <= 'z')
                cur += ch;
            else if(cur != "")
                st.insert(cur), cur = "";

        if(cur != "")
            st.insert(cur);
    }

    for(auto w : st)
        cout << w << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL), cout.tie(NULL); cout.setf(std::ios::fixed); cout.precision(4);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}