//https://www.e-olymp.com/ru/problems/4000
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, s, ans = 1;
    cin >> n >> s;
    s--;
    int ms[n][n];
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> ms[i][j];
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (ms[s][j] == 1)
            st.push(j);
    }
    ms[s][s] = 1;
    while (!st.empty())
    {
        int a = st.top();
        st.pop();
        if (ms[a][a] != 1)
        {
            for (int j = 0; j < n; j++)
            {
                if (ms[a][j] == 1)
                    st.push(j);
            }
            ans++;
            ms[a][a] = 1;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_b;
#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif
    solve();
    return 0;
}
