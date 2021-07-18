// https://www.e-olymp.com/ru/problems/1697
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    priority_queue<int> q;
    int n, c, k;
    scanf("%d %d %d", &n, &c, &k);
    //cin>>n>>c>>k;
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        int a, b;
        //cin>>a>>b;
        scanf("%d %d", &a, &b);
        if(a < k && b == 0)
            continue;
        else if(a >= k)
            ans++;
        else
            q.push(-1 * ceil(1.0 * (k - a) / b));
    }
    while(!q.empty())
    {
        auto cur = -1 * q.top();
        q.pop();
        if(c > 0 && c >= cur)
            c -= cur, ans++;
        else break;
    }
    cout << ans;
}

int main()
{
    //cout.setf(std::ios::fixed); //cout.precision(2);
    solve();
    // int t; cin >> t; while (t--) solve();
    return 0;
}