// https://www.e-olymp.com/ru/problems/5628
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s;
    cin >> s;
    bool fl = s[0] == '-';
    s = (fl ? s.substr(1) : s );
    sort(s.begin(), s.end());

    if(fl)
        reverse(s.begin(), s.end());
    else
    {
        int i = 0;
        while(s[i] == '0')
            i++;
        if(i)
            s[0] = s[i], s[i] = '0';
    }
    cout << (fl ? "-" : "") << s;
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