//https://www.e-olymp.com/ru/problems/1267
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int bfs(pair<int, int> start, pair<int, int> finish, const int & m, const int & n, const int & p, const int & q, map<pair<int, int>, pair<int, int>> &chield)
{
    struct step
    {
        int x;
        int y;
        int d;
    };

    queue<step> que;
    que.push({start.first, start.second, 0});

    pair<int, int> run[8] = {{p, -q}, {p, q}, {-p, -q}, {-p, q}, {q, p}, {q, -p}, {-q, p}, {-q, -p}};
    int MAXARR = max(m, n) + 1;
    bool used[MAXARR][MAXARR] = {false};

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

void pq_horse(const int & m, const int & n, const int & p, const int & q, pair<int, int> & start, pair<int, int> &finish, int &ans, stack<pair<int, int>> &st)
{
    map<pair<int, int>, pair<int, int>> chield;
    ans = bfs(start, finish, m, n, p, q, chield);

    if(ans == -1)
    {
        while(!st.empty()) st.pop();
        return;
    }

    st.push(finish);
    pair<int, int> cur = finish;
    while(cur != start)
    {
        cur = chield[ {cur.first, cur.second}];
        st.push({cur.first, cur.second});
    }
}

void solve()
{
    int x1, y1, x2, y2;
    char c1, c2;
    int n = 8, p = 2, q = 1;
    map<char, int> mp =
    {
        {'a', 1},
        {'b', 2},
        {'c', 3},
        {'d', 4},
        {'e', 5},
        {'f', 6},
        {'g', 7},
        {'h', 8}
    };

    while(cin >> c1 >> y1 >> c2 >> y2)
    {
        x1 = mp[c1];
        x2 = mp[c2];

        pair<int, int> start = {x1, y1};
        pair<int, int> finish = {x2, y2};
        int ans;
        stack<pair<int, int>> st;

        pq_horse(n, n, p, q, start, finish, ans, st);
        cout << "To get from " << c1 << y1 << " to " << c2 << y2 << " takes " << ans << " knight moves." << endl;

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