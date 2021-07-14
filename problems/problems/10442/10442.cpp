//https://www.e-olymp.com/ru/problems/10442
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s;
    cin >> s;
    int x = 0, y = 0;
    for(auto ch : s)
        x += ch == '>' ? 1 : (ch == '<' ? -1 : 0), y += ch == '^' ? 1 : (ch == 'v' ? -1 : 0);
    cout << x << " " << y << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(1);

    //solve();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}