// https://www.e-olymp.com/ru/problems/1001
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    int n = max(s1.length(), s2.length());
    s1 = string(n - s1.length(), '0') + s1;
    s2 = string(n - s2.length(), '0') + s2;

    int p = 0;
    string ans = "";
    for(int i = n - 1; i >= 0; i--)
    {
        int cur = p + (s1[i] - '0') + (s2[i] - '0');
        char ch = '0' + (cur % 2);
        ans = ch + ans;
        p = cur / 2;
    }
    if(p)
        ans = '1' + ans;

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(6);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}