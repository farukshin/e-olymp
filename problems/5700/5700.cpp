// https://www.e-olymp.com/ru/problems/5700
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int a, b, i = 1;
    string s;
    while(cin >> a >> s >> b)
    {
        if(s == "E") return;
        if(s == ">")
            cout << "Case " << i << ": " << (a > b ? "true" : "false" ) << "\n";
        else if(s == ">=")
            cout << "Case " << i << ": " << (a >= b ? "true" : "false" ) << "\n";
        else if(s == "<")
            cout << "Case " << i << ": " << (a < b ? "true" : "false" ) << "\n";
        else if(s == "<=")
            cout << "Case " << i << ": " << (a <= b ? "true" : "false" ) << "\n";
        else if(s == "==")
            cout << "Case " << i << ": " << (a == b ? "true" : "false" ) << "\n";
        else if(s == "!=")
            cout << "Case " << i << ": " << (a != b ? "true" : "false" ) << "\n";
        i++;
    }

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