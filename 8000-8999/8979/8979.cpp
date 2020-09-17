//https://www.e-olymp.com/ru/problems/8979
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    //std::cout.setf(std::ios::fixed);
    //std::cout.precision(4);
    string s;
    getline(cin, s);
    //cin >> s;
    bool success = false;

    for (auto ch : s)
        if (ch == 'a')
            cout << ch, success = true;

    if (!success)
        cout << -1;
    cout << endl;
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
