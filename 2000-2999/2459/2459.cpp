// https://www.e-olymp.com/ru/problems/2459
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s;
    cin >> s;
    int mas[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int d = (s[9] - '0') * 10 + (s[8] - '0');
    int m = (s[7] - '0') * 10 + (s[6] - '0');
    int g = (s[4] - '0') * 1000 + (s[3] - '0') * 100 + (s[1] - '0') * 10 + (s[0] - '0');

    bool vis = g % 4 == 0 && ( g % 100 != 0 || g % 400 == 0);
    bool ans = m >= 1 && m <= 12 && d > 0;
    if(!ans)
    {
        cout << "NO";
        return;
    }

    ans = mas[m - 1] >= d || m == 2 && vis && d == 29;

    cout << (ans ? "YES" : "NO");
}


int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(9);

    solve();
    //int t; cin >> t; while(t--) solve();
    return 0;
}