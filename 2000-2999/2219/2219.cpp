//https://www.e-olymp.com/ru/problems/2219
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    //cout.setf(std::ios::fixed);
    //cout.precision(6);

    int n;
    cin >> n;

    vector<pair<int, pair<int, int>>> v(n);
    queue<int> q;
    for(int i = 1; i <= n; i++)
    {
        int a, b;
        cin >> a >> b;
        v[i - 1] = {b, {a, i}};
    }

    sort(v.begin(), v.end(), greater<pair<int, pair<int, int>>>());

    int ans = v[0].first;
    q.push(v[0].second.second);
    for(int i = 1; i < v.size(); i++)
    {
        ans -= v[i].second.first;
        ans = min(ans, v[i].first);
        q.push(v[i].second.second);
        if(ans <= 0)
        {
            cout << -1 << endl;
            return;
        }
    }

    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
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