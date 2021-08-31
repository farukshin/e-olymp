// https://www.e-olymp.com/ru/problems/6
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int n;
ll ans = 0;
vector<pair<int, int>> v;

void backtracking(int day, ll curAns)
{
    ans = max(ans, curAns);
    for(int i = 0; i < n; i++)
        if(v[i].first > day)
        {
            ll cur = (v[i].first - day) * v[i].second;
            int d = v[i].first;
            v[i].first = 0;
            backtracking(day + 1, curAns + cur);
            v[i].first = d;
        }
}

void solve()
{
    cin >> n;
    v.resize(n);
    for(auto &d : v) cin >> d.first >> d.second;
    backtracking(0, 0);
    cout << ans;
}

int main()
{
    solve();
    //int t; cin >> t; while(t--) solve();
    return 0;
}