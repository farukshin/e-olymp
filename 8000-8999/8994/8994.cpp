//https://www.e-olymp.com/ru/problems/8994
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

    set<char> sets;
    bool succes = true;
    for (auto ch : s)
        sets.insert(ch);

    getline(cin, s);
    for (auto ch : s)
        if (!sets.count(ch))
            succes = false;

    cout << (succes ? "Ok" : "No") << endl;
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
