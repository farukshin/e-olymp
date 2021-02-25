//https://www.e-olymp.com/ru/problems/441
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int check(int n)
{
    int res = 0;
    while(n)
    {
        if(n % 10 == 0)
            res++;
        else break;
        n /= 10;
    }
    return res;
}
void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    cin >> n;
    set<int> st;
    int mx = -1;
    for(int i = 0; i < n; i++)
    {
        int cur, k;
        cin >> cur;
        k = check(cur);
        if(mx < k)
        {
            st.clear();
            st.insert(cur);
            mx = k;
        }
        else if(mx == k)
            st.insert(cur);
    }
    for(auto l : st)
    {
        cout << l << endl;
        break;
    }


}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}