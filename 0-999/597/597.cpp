// https://www.e-olymp.com/ru/problems/597
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    if(n == 0)
    {
        cout << 0;
        return;
    }
    int curn = n;
    string s = "";
    while(curn)
    {
        s = (curn & 1 ? '1' : '0') + s;
        curn = curn >> 1;
    }
    string ans = s;
    for(int i = 0; i < s.length(); i++)
    {
        s = s[s.length() - 1] + s.substr(0, s.length() - 1);
        if(ans < s) ans = s;
    }
    int res = 0;
    for(auto ch : ans)
        res = res * 2 + (ch == '1' ? 1 : 0);
    cout << res;

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