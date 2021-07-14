// https://www.e-olymp.com/ru/problems/3217
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, m;
    cin >> n >> m;

    set<string> st1, st2;

    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        st1.insert(s);
    }

    for(int i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        st2.insert(s);
    }

    int ans = 0;
    for(auto d : st1)
        if(st2.count(d))
            ans++;
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(2);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}