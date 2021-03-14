//https://www.e-olymp.com/ru/problems/2797
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    //cout.setf(std::ios::fixed);
    //cout.precision(15);


    int n;
    scanf("%d", &n);
    set<string> st;

    for(int i = 0; i < n; i++)
    {
        char chr[11];
        scanf("%s", chr);
        string s = string(chr);
        if(!st.count(s))
            st.insert(s);
    }
    int ans = st.size();
    printf("%d", ans);

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