// https://www.e-olymp.com/ru/problems/2381
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s;
    while(getline(cin, s))
    {
        if(s == "-1") break;

        istringstream iss (s);
        int n;
        set<int> st1;
        while(iss >> n)
        {
            if(n == 0) continue;
            st1.insert(n);
        }
        int ans = 0;
        for(auto d : st1)
            if(st1.count(d * 2))
                ans++;
        cout << ans << "\n";
    }

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}