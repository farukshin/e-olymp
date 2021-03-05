//https://www.e-olymp.com/ru/problems/2401
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

vector<vector<int>> ss;

int bfs(int start, int finish)
{
    queue<pair<ll, int>> q;
    q.push({0, start});
    vector<bool >used(ss.size());
    used[start] = true;

    while(!q.empty())
    {
        auto cur = q.front();
        q.pop();
        for(auto chield : ss[cur.second])
        {
            if(used[chield])
                continue;
            if(chield == finish)
                return cur.first + 1;
            used[chield] = true;
            q.push({cur.first + 1, chield});
        }
    }
    return 0;
}

void solve()
{
    //cout.setf(std::ios::fixed);
    //cout.precision(6);

    int n, start, finish;
    cin >> n >> start >> finish;
    --start, --finish;

    ss.resize(n);
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            int cur;
            cin >> cur;
            if(cur)
                ss[i].push_back(j), ss[j].push_back(i);
        }

    cout << bfs(start, finish) << endl;

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //string cur; int t; cin >> t; getline(cin,cur); while (t--) solve();

    return 0;
}