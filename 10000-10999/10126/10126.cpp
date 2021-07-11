// https://www.e-olymp.com/ru/problems/10126
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, k;
    cin >> n >> k;
    set<int> st;
    for(int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        st.insert(cur);
    }

    int ans = 0;
    for(auto d : st)
        if(st.count(d + k))
            ans++;

    cout << ans;
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