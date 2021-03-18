//https://www.e-olymp.com/ru/problems/9531
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

pair<int, int> read(string s, bool rever)
{
    pair<int, int> res;
    istringstream stream(s);
    char ch;
    stream >> res.first;
    stream >> ch;
    stream >> res.second;
    res.second *= (ch == '-' ? -1 : 1);

    if(rever)
        res.first *= -1, res.second *= -1;

    return res;

}

void calc(pair<int, int> a, pair<int, int> b, char ch)
{
    cout << a.first + b.first;
    int d = a.second + b.second;
    cout << (d >= 0 ? "+" : "") << d << "i\n";
}

void solve()
{
    string s;
    while(cin >> s)
    {
        pair<int, int> a = read(s, false);
        char ch;
        cin >> ch;
        cin >> s;
        bool rever = ch == '-';
        pair<int, int> b = read(s, rever);

        calc(a, b, ch);
    }

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