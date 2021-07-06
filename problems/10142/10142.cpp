//https://www.e-olymp.com/ru/problems/10142
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    queue<int> q1, q2;

    for(int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        q1.push(cur);
    }

    for(int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        q2.push(cur);
    }

    ll ans = 0;
    while(!q2.empty())
    {
        while(q1.front() != q2.front())
        {
            auto cur = q1.front();
            q1.pop();
            q1.push(cur);
            ans++;
        }
        q1.pop();
        q2.pop();
        ans++;
    }
    cout << ans;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}