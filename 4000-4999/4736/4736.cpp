//https://www.e-olymp.com/ru/problems/4736
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;


ll sumNum(string s)
{
    ll res = 0;
    for (auto ch : s)
        if (ch >= '0' && ch <= '9')
            res += (ch - '0');

    return res;
}

ll sumNum1(string s)
{
    ll res = 0;
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        if (ch >= '0' && ch <= '9' && i % 2 == 1)
            res += (ch - '0');
    }

    return res;
}

ll sumNum0(string s)
{
    ll res = 0;
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        if (ch >= '0' && ch <= '9' && i % 2 == 0)
            res += (ch - '0');
    }

    return res;
}

int lastNum(string s)
{
    for (int i = s.size() - 1; i >= 0; i--)
        if (s[i] >= '0' && s[i] <= '9')
            return (s[i] - '0');

    return 0;
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    string s;
    cin >> s;
    //int last = lastNum(s);
    ll sum1 = sumNum1(s);
    ll sum0 = sumNum0(s);

    cout << (sum1 == sum0 || (abs(sum1 - sum0) % 11 == 0) ? "Yes" : "No") << endl;
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