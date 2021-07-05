// https://www.e-olymp.com/ru/problems/7309
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int trim(int n)
{
    int ans = n;
    while(true)
    {
        if(ans == 0 || ans & 1)
            break;
        ans = ans >> 1;
    }
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    set<int> st;
    for(int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        st.insert(trim(cur));
    }
    // for(auto d:st)
    // 	cout<<d<<" ";
    // cout<<"\n";
    cout << (st.size() == 1 ? "YES" : "NO");
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