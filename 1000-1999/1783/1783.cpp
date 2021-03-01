//https://www.e-olymp.com/ru/problems/1783
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void reversePerm(vector<int> &p, vector<int> &rep)
{
    for(int i = 1; i < p.size(); i++)
        rep[p[i]] = i;
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    cin >> n;
    int mn = n + 5;
    queue<int> q;

    for(int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        mn = min(mn, cur);
        q.push(cur);
    }

    //while(prev_permutation(v.begin(), v.end()))
    while(q.front() != mn)
    {
        auto cur = q.front();
        q.pop();
        q.push(cur);
    }

    while(!q.empty())
    {
        auto cur = q.front();
        q.pop();
        cout << cur << " ";
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