// https://www.e-olymp.com/ru/problems/3650
//#include <bits/stdc++.h>
#include <cstdio>
#include <set>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    scanf("%d", &n);
    int v[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);

    set<int> st;
    for (int mask = 0; mask < (1 << n); mask++)
    {
        int cur = 0;
        bool fl = false;
        for (int i = 0; i < n; i++)
            if (mask & (1 << i))
                cur += v[i], fl = true;
        if (fl)
            st.insert(cur);
    }

    printf("%d", st.size());
}

int main()
{
    solve();
    return 0;
}
