//https://www.e-olymp.com/ru/problems/2016
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(3);

    int n;
    cin >> n;
    ll ans = 1;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if(b > a)
            q.push({a, b - a});
    }

    while(!q.empty())
    {
        auto cur = q.top();
        q.pop();
        if(ans < cur.first)
            break;
        ans += cur.second;
    }
    cout << ans << endl;
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