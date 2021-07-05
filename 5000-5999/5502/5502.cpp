// https://www.e-olymp.com/ru/problems/5502
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s;
    int i = 0, line = 0;
    ld ans = -2 * 1e9 - 5;
    string ans2;
    while(getline(cin, s))
    {
        i++;
        istringstream io(s);
        string cur;
        while(io >> cur)
        {
            ld r = stold(cur);
            if(r > ans)
                ans = r, line = i, ans2 = cur;
        }
    }
    cout << line << " " << ans2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}