// https://www.e-olymp.com/ru/problems/9701
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s;
    int mn = 100, mx = -100;
    while(getline(cin, s))
    {
        string cur;
        int n;
        istringstream io(s);
        io >> cur;
        while(io >> n)
            mn = min(mn, n), mx = max(mx, n);
    }
    cout << mn << " " << mx;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}