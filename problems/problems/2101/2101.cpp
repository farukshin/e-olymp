// https://www.e-olymp.com/ru/problems/2101
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s;
    cin >> s;
    s = string(4 - s.length(), '0') + s;
    int ans = s.length();
    for(int i = 0; i < s.length() - 1; i++)
        ans += abs(int(s[i]) - int(s[i + 1]));
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(2);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}