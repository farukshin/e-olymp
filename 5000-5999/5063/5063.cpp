// https://www.e-olymp.com/ru/problems/5063
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
    for(int i = 0; i < k; i++)
    {
        int cur;
        cin >> cur;
        cout << (st.count(cur) ? "Yes, master!\n" : "Silence\n");
    }
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