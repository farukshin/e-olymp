//https://www.e-olymp.com/ru/problems/4737
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;


static inline void ltrim(std::string& s) {
    s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](unsigned char ch) {
        return !std::isspace(ch);
        }));
}

static inline void rtrim(std::string& s) {
    s.erase(std::find_if(s.rbegin(), s.rend(), [](unsigned char ch) {
        return !std::isspace(ch);
        }).base(), s.end());
}

static inline void trim(std::string& s) {
    ltrim(s);
    rtrim(s);
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    string s;
    getline(cin, s);
    trim(s);
    cout << s[0];
    for (int i = 1; i < s.size() ;i++)
    {
        if (s[i - 1] == ' ' && s[i] == ' ')
            continue;
        cout << s[i];
    }
    //cout << s << endl;
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