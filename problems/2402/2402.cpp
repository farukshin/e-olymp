//https://www.e-olymp.com/ru/problems/2402
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const int MAX = 105;

int p, q, n, m;
map<pair<int, int>, pair<int, int>> chield;

struct step
{
    int x;
    int y;
    int d;
};

int bfs(pair<int, int> start, pair<int, int> finish)
{
    queue<step> que;
    que.push({start.first, start.second, 0});

    pair<int, int> run[8] = {{p, -q}, {p, q}, {-p, -q}, {-p, q}, {q, p}, {q, -p}, {-q, p}, {-q, -p}};
    bool used[MAX][MAX] = {false};

    while (!que.empty())
    {
        auto cur = que.front();
        que.pop();

        if (cur.x == finish.first && cur.y == finish.second)
        {
            //chield[{finish.first, finish.second}]= {cur.x, cur.y};
            return cur.d;
        }

        for (auto r : run)
            if (cur.x + r.first <= m && cur.x + r.first >= 1 && cur.y + r.second <= n && cur.y + r.second >= 1 && !used[cur.x + r.first][cur.y + r.second])
            {
                used[cur.x + r.first][cur.y + r.second] = true;
                que.push({cur.x + r.first, cur.y + r.second, cur.d + 1});
                chield[ {cur.x + r.first, cur.y + r.second}] = {cur.x, cur.y};
            }
    }

    return -1;
}

void solve()
{
    int x1, y1, x2, y2;
    cin >> m >> n >> p >> q >> x1 >> y1 >> x2 >> y2;

    pair<int, int> start = {x1, y1};
    pair<int, int> finish = {x2, y2};
    int ans = bfs(start, finish);

    if(ans == -1)
    {
        cout << -1 << endl;
        return;
    }





    stack<pair<int, int>> st;
    st.push(finish);

    //cout<< chield[{2, 2}].first<<" "<< chield[{2, 2}].second <<endl;
    //cout<< chield[finish].first<<" "<< chield[finish].second <<endl;

    pair<int, int> cur = finish;
    while(cur != start)
    {
        cur = chield[ {cur.first, cur.second}];
        st.push({cur.first, cur.second});
    }
    cout << ans << endl;
    while(!st.empty())
    {
        auto s = st.top();
        st.pop();
        cout << s.first << " " << s.second << endl;
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
    return 0;
}