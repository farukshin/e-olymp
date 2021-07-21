// https://www.e-olymp.com/ru/problems/432
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int h, n, m;
tuple<int, int, int> start, finish;
vector<vector<string>> v(30, vector<string>(30));

int runH[6] = {0, 0, 0, 0, 1, -1};
int runN[6] = {1, 0, -1, 0, 0, 0};
int runM[6] = {0, -1, 0, 1, 0, 0};

void bfs()
{
    int dist[h][n][m];
    fill_n(&dist[0][0][0], h * n * m, INT_MAX);

    int a, b, c;
    tie(a, b, c) = start;
    dist[a][b][c] = 0;

    queue<pair<int, tuple<int, int, int>>> q;
    q.push({0, start});

    while(!q.empty())
    {
        auto cur = q.front();
        q.pop();
        int curLen = cur.first;
        auto curNode = cur.second;

        if(curNode == finish)
        {
            cout << "Escaped in " << curLen << " minute(s).\n";
            return;
        }

        int hh, nn, mm;
        tie(hh, nn, mm) = curNode;

        for(int i = 0; i < 6; i++)
        {
            int newh, newn, newm;
            newh = hh + runH[i];
            newn = nn + runN[i];
            newm = mm + runM[i];
            bool check = newh >= 0 && newh < h && newn >= 0 && newn < n && newm >= 0 && newm < m;
            if(!check)
                continue;
            if(dist[newh][newn][newm] <= curLen + 1 || v[newh][newn][newm] == '#')
                continue;

            dist[newh][newn][newm] = curLen + 1;
            q.push({curLen + 1, make_tuple(newh, newn, newm)});
        }

    }
    cout << "Trapped!\n";
}

void solve()
{
    while(cin >> h >> n >> m)
    {
        if(h == 0 && n == 0 && m == 0)
            break;
        for(int hh = 0; hh < h; hh++)
            for(int nn = 0; nn < n; nn++)
            {
                cin >> v[hh][nn];
                for(int mm = 0; mm < v[hh][nn].length(); mm++)
                    if(v[hh][nn][mm] == 'S')
                        start = make_tuple(hh, nn, mm);
                    else if(v[hh][nn][mm] == 'E')
                        finish = make_tuple(hh, nn, mm);
            }
        bfs();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(5);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}