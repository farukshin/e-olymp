//https://www.e-olymp.com/ru/problems/10073
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    cin >> n;
    stack<int> st;

    while(n != 1)
    {
        if(n % 3 != 0)
            st.push(1), n--;
        else if(n / 3 > 0)
            st.push(3), n /= 3;
        else
            st.push(1), n--;
    }

    while(!st.empty())
    {
        auto s = st.top();
        st.pop();
        cout << s;
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