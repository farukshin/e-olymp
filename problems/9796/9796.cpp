//https://www.e-olymp.com/ru/problems/9796
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s, k;

    while(cin >> k, k != "0")
    {
        cin >> s;
        while(k.size() < s.size())
            k += k;
        for(int i = 0; i < s.size(); i++)
            cout << char('A' + ((s[i] - 'A') + (k[i] - 'A' + 1)) % 26);
        cout << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(2);

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}