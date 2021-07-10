// https://www.e-olymp.com/ru/problems/6033
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

bool bfs(vector<vector<int>> &ss, int &n, vector<pair<int, int>> &v)
{
    int finish = n + 1;
    queue<int> q;
    q.push(0);
    vector<bool> used(n + 2, false);

    while(!q.empty())
    {
        auto cur = q.front();
        q.pop();
        if(cur == finish)
            return true;

        for(auto chield : ss[cur])
            if(chield != cur && !used[chield])
                used[chield] = true, q.push(chield);
    }

    return false;
}

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n + 2);
    for(int i = 0; i < n + 2; i++)
        cin >> v[i].first >> v[i].second;

    vector<vector<int>> ss(n + 2);
    for(int i = 0; i < n + 2; i++)
        for(int j = i + 1; j < n + 2; j++)
            if(abs(v[i].first - v[j].first) + abs(v[i].second - v[j].second) <= 50 * 20)
                ss[i].push_back(j), ss[j].push_back(i);

    cout << (bfs(ss, n, v) ? "happy" : "sad") << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    //solve();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}