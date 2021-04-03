// https://www.e-olymp.com/ru/problems/5095
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

string xorr(string s1, string s2)
{
    string res = "";
    for(int i = 0; i < s1.length(); i++)
        res += s1[i] == s2[i] ? '0' : '1' ;
    while(res[0] == '0' && res.length() > 1)
        res = res.substr(1);
    //res = (res == "" ?"0":res);
    return res;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    string s1, s2;
    cin >> s1 >> s2;
    if(n > m) swap(n, m), swap(s1, s2);

    s1 = string(m - n, '0') + s1;
    cout << xorr(s1, s2);

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    // cout.setf(std::ios::fixed); cout.precision(2);

    solve();
    return 0;
}