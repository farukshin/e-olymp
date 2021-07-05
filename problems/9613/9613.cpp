// https://www.e-olymp.com/ru/problems/9613
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int runx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
int runy[8] = {0, -1, 0, 1, 1, -1, 1, -1};

class myClass
{

public:
    bool operator()(pair<pair<int, int>, pair<int, int>> p1, pair<pair<int, int>, pair<int, int>> p2)
    {
        if(p1.first.second != p2.first.second)
            return p1.first.second > p2.first.second;
        else
            return p1.first.first > p2.first.first;

        //if(p1.first.first != p2.first.first)
        // 	return p1.first.first > p2.first.first;
        // else
        // 	return p1.first.second > p2.first.second;
    }
};

int dist(pair<int, int> p1, pair<int, int> p2)
{
    int res = abs(p1.first - p2.first) + abs(p1.second - p2.second);
    return res;
}

void solve()
{
    int n, m, k;
    pair<int, int> finish;
    cin >> n >> m >> k >> finish.first >> finish.second;
    --finish.first, --finish.second;
    vector<vector<int>> v(n, vector<int>(m));
    vector<vector<int>> ans(n, vector<int>(m, INT_MAX));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> v[i][j];

    priority_queue<pair<pair<int, int>, pair<int, int>>, vector<pair<pair<int, int>, pair<int, int>>>, myClass> q;
    for(int i = 0; i < k; i++)
    {
        pair<int, int> cur;
        cin >> cur.first >> cur.second;
        --cur.first, --cur.second;
        q.push({{dist(cur, finish), 0}, cur});
        ans[cur.first][cur.second] = 0;
    }

    if(ans[finish.first][finish.second] == 0)
    {
        cout << 0;
        return;
    }

    // while(!q.empty())
    // {
    // 	auto step = q.top();
    // 	q.pop();

    // 	int proir = step.first.first;
    // 	int curLen = step.first.second;
    // 	pair<int, int> cur = step.second;

    // 	printf("proir=%d curLen=%d cur= {%d, %d}\n", proir, curLen, cur.first+1, cur.second+1);
    // }
    // return;

    while(!q.empty())
    {
        auto step = q.top();
        q.pop();

        int proir = step.first.first;
        int curLen = step.first.second;
        pair<int, int> cur = step.second;

        if(cur.first == finish.first && cur.second == finish.second)
            continue;

        if(curLen > ans[finish.first][finish.second] || curLen > ans[cur.first][cur.second])
            continue;

        for(int i = 0; i < 8; i++)
        {
            int ii = cur.first  + runx[i];
            int jj = cur.second + runy[i];
            if(ii >= 0 && ii < n && jj >= 0 && jj < m)
            {
                int newLen = curLen + v[cur.first][cur.second];
                if(ans[ii][jj] == INT_MAX || ans[ii][jj] != INT_MAX && ans[ii][jj] > newLen)
                {
                    ans[ii][jj] = newLen;
                    q.push({ { dist({ii, jj}, finish), newLen}, {ii, jj} });
                }
            }
        }

    }

    cout << ans[finish.first][finish.second];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}