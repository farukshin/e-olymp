// https://www.e-olymp.com/ru/problems/1957
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    int mx = -1, pre = -1;

    for(int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        if(cur == mx || cur == pre) continue;
        else if(cur > mx) pre = mx, mx = cur;
        else if(cur > pre) pre = cur;
    }
    cout << pre;
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