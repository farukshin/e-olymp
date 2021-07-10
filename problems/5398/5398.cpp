// https://www.e-olymp.com/ru/problems/5398
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s;
    cin >> s;
    bool open = false;
    bool success = true;
    for(int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if(ch == '(' && open || ch == ')' && !open)
        {
            cout << "ERROR";
            success = false;
            break;
        }
        else if(ch == '(' && !open)
            open = true;
        else if(ch == ')' && open)
            open = false;
    }

    if(success)
        cout << (open ? "INSIDE" : "OUTSIDE");
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