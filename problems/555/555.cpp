// https://www.e-olymp.com/ru/problems/555
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    set<int> st;
    map<int, vector<int>> mp;

    vector<int> ans(3, INT_MAX);

    for(int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        st.insert(cur);
        mp[cur].push_back(i);
        set<int>::iterator itlow, itup;

        itlow = st.lower_bound (cur);
        itup = st.upper_bound (cur);

        if( itlow != st.begin())
        {
            itlow--;
            if( ans[0] > abs(cur - *itlow))
                ans[0] = abs(cur - *itlow), ans[1] = i, ans[2] = mp[*itlow][0];
        }


        if( itup != st.end() && ans[0] > abs(cur - *itup))
            ans[0] = abs(cur - *itup), ans[1] = i, ans[2] = mp[*itup][0];
    }
    cout << ans[0] << "\n" << min(ans[1], ans[2]) + 1 << " " << max(ans[1], ans[2]) + 1;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}