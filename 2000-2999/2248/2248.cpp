// https://www.e-olymp.com/ru/problems/2248
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

priority_queue<pair<int, int>> q;

void solve()
{
    int n, k, cur;
    cin >> n >> k;
    for(int i = 1; i <= k; i++)
    {
        cin >> cur;
        q.push({-1 * cur, i});
        if(i == k)
            cout << -1 * q.top().first << " ";
    }
    for(int i = k + 1; i <= n; i++)
    {
        cin >> cur;
        q.push({-1 * cur, i});
        while(i - k >= q.top().second)
        {
            //printf("\npop i=%d %d %d", i, -1*q.top().first, q.top().second);
            q.pop();
        }
        cout << -1 * q.top().first << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}