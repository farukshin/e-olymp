//https://www.e-olymp.com/ru/problems/8382
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    //cout.setf(std::ios::fixed);
    //cout.precision(6);

    string s;
    cin >> s;
    bool
    b1 = false,
    b2 = false,
    b3 = false,
    b4 = false,
    b5 = false;

    set<char> st =
    {
        '!',
        '"',
        '#',
        '$',
        '%',
        '&',
        '\'',
        '(',
        ')',
        '*',
        '+'
    };

    int ans = 0;
    for(auto ch : s)
    {
        b1 = b1 || (ch >= 'a' && ch <= 'z');
        b2 = b2 || (ch >= 'A' && ch <= 'Z');
        b3 = b3 || (ch >= '0' && ch <= '9');
        b4 = b4 || (st.count(ch) > 0);
    }
    b5 = s.size() >= 8;

    ans +=
        (b1 ? 1 : 0)
        + (b2 ? 1 : 0)
        + (b3 ? 1 : 0)
        + (b4 ? 1 : 0)
        + (b5 ? 1 : 0);

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
    //string cur; int t; cin >> t; getline(cin,cur); while (t--) solve();

    return 0;
}