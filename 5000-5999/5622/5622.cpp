//https://www.e-olymp.com/ru/problems/5622
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int n;
ll ans = 0;
vector<string> v;
vector<vector<bool>> used;

int runx[4] = {0, 1, 0, -1};
int runy[4] = {1, 0, -1, 0};

void check(int a, int b)
{
    if(a == 0 && b != 0 || a != 0 && v[a - 1][b] == '#')
        ans++;

    if(a == n - 1 && b != n - 1 || a != n - 1 && v[a + 1][b] == '#')
        ans++;

    if(b == 0 && a != 0 || b != 0 && v[a][b - 1] == '#')
        ans++;

    if(b == n - 1 && a != n - 1 || b != n - 1 && v[a][b + 1] == '#')
        ans++;
}

void bfs(int s1, int s2)
{
    queue<pair<int, int>> q;
    if(!used[s1][s2])
        q.push({s1, s2}), used[s1][s2] = true, check(s1, s2);

    while(!q.empty())
    {
        auto cur = q.front();
        q.pop();
        int a = cur.first;
        int b = cur.second;

        for(int i = 0; i < 4; i++)
        {
            int aa = a + runx[i];
            int bb = b + runy[i];

            if(aa >= 0 && aa < n && bb >= 0 && bb < n && !used[aa][bb] && v[aa][bb] == '.')
                q.push({aa, bb}), used[aa][bb] = true, check(aa, bb);

        }
    }
}


void solve()
{

    cin >> n;
    v.resize(n);
    used.resize(n, vector<bool>(n, false));
    for(int i = 0; i < n; i++)
        cin >> v[i];

    bfs(0, 0);
    bfs(n - 1, n - 1);

    cout << ans * 9;
}

int main()
{
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL), cout.tie(NULL); cout.setf(std::ios::fixed); cout.precision(4);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}