// https://www.e-olymp.com/ru/problems/512
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    set<string> st;
    for(int i = 0; i < n; i++)
    {
        string cur;
        cin >> cur;
        st.insert(cur);
    }
    int k;
    cin >> k;
    vector<string> ans;
    for(int i = 0; i < k; i++)
    {
        string cur;
        cin >> cur;
        if(st.count(cur))
            ans.push_back(cur);
    }
    cout << ans.size() << "\n";
    for(auto d : ans)
        cout << d << "\n";
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