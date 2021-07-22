// https://www.e-olymp.com/ru/problems/1062
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int n, m;
pair<int, int> start, finish;
vector<string> v(255);

int runN[4] = {1, 0, -1, 0};
int runM[4] = {0, -1, 0, 1};

void bfs()
{
    bool used[n][m];
    fill_n(&used[0][0], n * m, false);
    pair<int, int> par[n][m];


    int a, b;
    tie(a, b) = start;
    used[a][b] = true;
    par[a][b] = {-1, -1};

    queue<pair<int, int>> q;
    q.push(start);

    while(!q.empty())
    {
        auto cur = q.front();
        q.pop();
        auto curNode = cur;

        if(curNode == finish)
        {
            cout << "Y\n";
            while(curNode != start)
            {
                v[curNode.first][curNode.second] = '+';
                curNode = par[curNode.first][curNode.second];
            }
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < n; j++)
                    cout << v[i][j];
                cout << "\n";
            }
            return;
        }

        int nn = curNode.first, mm = curNode.second;

        for(int i = 0; i < 4; i++)
        {
            int newn, newm;
            newn = nn + runN[i];
            newm = mm + runM[i];
            bool check = newn >= 0 && newn < n && newm >= 0 && newm < m;
            if(!check)
                continue;
            if(used[newn][newm] || v[newn][newm] == 'O')
                continue;

            par[newn][newm] = {nn, mm};
            used[newn][newm] = true;
            q.push(make_pair(newn, newm));
        }

    }
    cout << "N\n";
}

void solve()
{
    cin >> n;
    m = n;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        for(int j = 0; j < n; j++)
            if(v[i][j] == '@')
                start = make_pair(i, j);
            else if(v[i][j] == 'X')
                finish = make_pair(i, j);
    }
    bfs();
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