//https://www.e-olymp.com/ru/problems/537
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    while(cin >> n)
    {
        set<int> st;
        if(n == 0) break;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < 6; j++)
            {
                int cur;
                cin >> cur;
                st.insert(cur);
            }
        cout << (st.size() == 49 ? "Yes" : "No") << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(6);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}