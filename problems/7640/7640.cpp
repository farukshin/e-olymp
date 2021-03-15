//https://www.e-olymp.com/ru/problems/7640
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(9);

    string s;
    int n;
    cin >> s >> n;
    vector<string> v;
    for(int i = 0; i < n; i++)
    {
        string cur;
        cin >> cur;
        if(cur.length() == s.length())
        {
            bool success = true;
            for(int j = 0; j < s.length() && success; j++)
                if(!(cur[j] == s[j] || s[j] == '*'))
                    success = false;
            if(success)
                v.push_back(cur);
        }
    }
    cout << v.size() << "\n";
    for(auto d : v)
        cout << d << "\n";
}

int main()
{
    //ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}