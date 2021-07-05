// https://www.e-olymp.com/ru/problems/2014
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int sm(int n)
{
    int ans = 0;
    while(n)
    {
        ans += (n % 10);
        n /= 10;
    }
    return ans;
}

void solve()
{
    string s;
    cin >> s;
    bool fl = false;
    int ans1 = 0, ans2 = 0;
    for(auto ch : s)
        if(ch == '.')
            fl = true;
        else if(ch < '0' || ch > '9')
            continue;
        else if(!fl)
            ans1 += ch - '0';
        else if(fl)
            ans2 += ch - '0';
    cout << (ans1 == ans2 ? "Yes" : "No");
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