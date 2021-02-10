//https://www.e-olymp.com/ru/problems/5087
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(3);

    string s;
    int n, k;
    stack<int> st;
    cin >> k;

    for (int i = 0; i < k; i++)
    {
        cin >> n;
        if (n == 1)
        {
            int cur;
            cin >> cur;
            st.push(cur);
        }
        else if (n == 2)
            cout
                << st.top() << endl,
                st.pop();
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
    //int t; cin >> t; while(t--) solve();

    return 0;
}