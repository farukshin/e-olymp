//https://www.e-olymp.com/ru/problems/2927
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;



void solve()
{
    int n;
    cin >> n;
    set<int> st;

    for(int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        for(int j = 0; j < k; j++)
        {
            int cur;
            cin >> cur;
            st.insert(cur);
        }
    }
    cout << st.size();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}