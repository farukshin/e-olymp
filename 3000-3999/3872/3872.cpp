//https://www.e-olymp.com/ru/problems/3872
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s;
    int ans = 0;
    while(cin >> s)
        for(int i = 0; i < s.length() - 1; i++)
            if(s[i] == '\\' &&  (s[i + 1] == 't' || s[i + 1] == 'r' || s[i + 1] == 'n'))
                ans++;
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(3);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}