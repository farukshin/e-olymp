//https://www.e-olymp.com/ru/problems/87
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    string s;
    getline(cin, s);
    set<int> sets;

    int cur = 0;
    sets.insert(cur);

    for (auto ch : s)
        if (ch == 'L')
            sets.insert(cur - 1), cur--;
        else if (ch == 'R')
            sets.insert(cur + 1), cur++;
        else if (ch == 'S')
            sets.insert(cur);

    cout << sets.size() << endl;
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