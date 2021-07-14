// https://www.e-olymp.com/ru/problems/7024
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int runx[4] = {0, 1, 0, -1};
int runy[4] = {1, 0, -1, 0};

char black = '.';
char start = '@';
char red = '#';

void solve()
{
    int a, b;
    while(cin >> b >> a, a > 0 && b > 0)
    {
        vector<string> v(a);
        vector<vector<bool>> used(a, vector<bool> (b, false));

        for(int i = 0; i < a; i++)
            cin >> v[i];

        queue<pair<int, int>> q;

        ll ans = 0;
        for(int i = 0; i < a; i++)
            for(int j = 0; j < b; j++)
                if(v[i][j] == start)
                    q.push({i, j}), ans++, used[i][j] = true;

        while(!q.empty())
        {
            auto cur = q.front();
            q.pop();
            int x = cur.first, y = cur.second;

            for(int i = 0; i < 4; i++)
            {
                int xx = x + runx[i];
                int yy = y + runy[i];

                if(xx >= 0 && xx < a && yy >= 0 && yy < b && !used[xx][yy] && v[xx][yy] != red)
                    used[xx][yy] = true, ans++, q.push({xx, yy});
            }
        }
        cout << ans << "\n";
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}