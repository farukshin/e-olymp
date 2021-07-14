// https://www.e-olymp.com/ru/problems/6965
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const int MAXARR = 1002;

ll ans;
int k, w, h;
int startX, startY;
//vector<vector<ll>> dist(MAXARR, vector<ll>(MAXARR));
ll dist[MAXARR][MAXARR];
int v[MAXARR][MAXARR];

vector<int> runX = {0, 1, 0, -1};
vector<int> runY = {-1, 0, 1, 0};

void bfs(int i, int j, ll len)
{
    fill(dist[0], dist[0] + MAXARR * MAXARR, LLONG_MAX);
    dist[i][j] = len;

    priority_queue< pair<ll, pair<int, int>>, vector<pair<ll, pair<int, int>>>, greater<pair<ll, pair<int, int>>> > q;
    q.push({ 0, {i, j}});

    while (!q.empty())
    {
        auto u = q.top();
        q.pop();
        int a = u.second.first;
        int b = u.second.second;
        ll curLen = u.first;

        if(curLen > ans)
            break;

        if (curLen > dist[a][b])
            continue;

        if(a == 0 || a == h - 1 || b == 0 || b == w - 1)
        {
            ans = min(ans, curLen);
            continue;
        }

        for (int r = 0; r < 4; r++)
        {
            int aa = a + runX[r];
            int bb = b + runY[r];
            bool inArea = (aa >= 0 && aa < h && bb >= 0 && bb < w);
            if(!inArea)
                continue;
            ll newLen = curLen + v[aa][bb];
            if (dist[aa][bb] > newLen)
            {
                dist[aa][bb] = newLen;
                q.push({ dist[aa][bb], {aa, bb} });
            }
        }
    }
}

void solve()
{
    cin >> k >> w >> h;
    map<char, int> mp;
    for(int i = 0; i < k; i++)
    {
        char a;
        int b;
        cin >> a >> b;
        mp[a] = b;
    }

    for(int i = 0; i < h; i++)
    {
        string s;
        cin >> s;
        for(int j = 0; j < w; j++)
        {
            char ch = s[j];
            v[i][j] = mp[ch];
            if(ch == 'E') startX = i, startY = j;
        }
    }

    ans = LLONG_MAX;
    bfs(startX, startY, 0);
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    //solve();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}