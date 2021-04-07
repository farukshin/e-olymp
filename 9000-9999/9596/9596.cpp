//https://www.e-olymp.com/ru/problems/9596
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, m;
    cin >> n >> m;
    string s;
    int pos = 0;
    while(cin >> s)
    {
        if(pos == 0)
            cout << s, pos = s.length();
        else if(pos +  s.length() > m)
            cout << "\n" << s, pos = s.length();
        else cout << " " << s, pos += s.length();
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin >> t; while(t--) solve();
    return 0;
}