// https://www.e-olymp.com/ru/problems/10482
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    string s;
    getline(cin, s);
    int cur;
    set<int> st;
    for(int i = 0; i < n; i++)
    {
        getline(cin, s);
        istringstream  io(s);
        io >> cur;
        while(io >> cur)
            st.insert(cur);
    }
    int ans = 0;
    for(int i = 1; i <= n; i++)
        if(!st.count(i))
            ans++;
    cout << ans;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(5);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}