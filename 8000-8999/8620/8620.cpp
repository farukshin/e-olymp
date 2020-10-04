//https://www.e-olymp.com/ru/problems/8620
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // std::cout.setf(std::ios::fixed);
    // std::cout.precision(2);

    string s;
    cin >> s;

    map<char, int> maps;

    for (auto ch : s)
        if (ch >= '0' && ch <= '9')
            maps[ch]++;

    bool fl = maps.size() == 2;
    for (auto f : maps)
        if (f.second != 1 && f.second != 3)
        {
            fl = false;
            //cout << f.first << endl;
        }

    cout << (fl ? "YES" : "NO") << endl;
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
