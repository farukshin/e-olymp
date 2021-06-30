// https://www.e-olymp.com/ru/problems/10277
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    char ch;
    int n;
    cin >> ch >> n;
    map<char, int> mp =
    {
        {'A', 1},
        {'B', 2},
        {'C', 3},
        {'D', 4},
        {'E', 5},
        {'F', 6},
        {'G', 7},
        {'H', 8}
    };
    cout << (mp[ch] % 2 == 0 && n % 2 != 0 || mp[ch] % 2 != 0 && n % 2 == 0 ? "WHITE" : "BLACK");
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}