//https://www.e-olymp.com/ru/problems/7372
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void calc(string &s, int &l, int &r)
{
    bool zag = s[l] >= 'A' && s[l] <= 'Z';
    string s2 = s.substr(l, r - l + 1);
    for(int i = 0; i < s2.length(); i++)
        if(s2[i] >= 'A' && s2[i] <= 'Z')
            s2[i] = 'a' + (s2[i] - 'A');
    sort(s2.begin(), s2.end());
    auto last = unique(s2.begin(), s2.end());
    s2.erase(last, s2.end());
    s2[0] = (zag && s2[0] >= 'a' && s2[0] <= 'z' ? 'A' + (s2[0] - 'a') : s2[0]);
    s = s.substr(0, l) + s2 + s.substr(r + 1);
}

string check(string &s)
{
    bool word = false;
    int r = s.size() - 1,  l = s.size() - 1;
    for(int i = s.size() - 1; i >= 0; i--)
    {
        bool ch = s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z';
        if(!word && ch)
            r = i, word = true;
        else if(word && !ch)
        {
            l = i + 1;
            calc(s, l, r);
            word = false;
            r = i, l = i;
        }
    }

    if(word)
    {
        l = 0;
        calc(s, l, r);
        word = false;
    }

    return s;
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    string s;
    while(getline(cin, s))
        cout << check(s) << "\n";
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