//https://www.e-olymp.com/ru/problems/3809
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;


void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(9);

    int n;
    cin >> n;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > q1;
    priority_queue<pair<int, int>> q2;

    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        q1.push({a, b});
    }

    ll ans = 0;
    int h = 1;

    while(true)
    {
        if(q1.empty() && q2.empty()) break;


        if(q2.empty())
            h = q1.top().first;

        if(!q1.empty())
            while(!q1.empty() && q1.top().first <= h)
            {
                q2.push({q1.top().second, q1.top().first});
                q1.pop();
            }
        ll k = (h - q2.top().second);
        k *= q2.top().first;
        ans += k;
        q2.pop();
        h++;
    }
    cout << ans << "\n";
}

int main()
{
    //ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    //solve();
    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}