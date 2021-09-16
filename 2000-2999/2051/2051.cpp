// https://www.e-olymp.com/ru/problems/2051
#include <cstdio>
#include <map>

using namespace std;

void solve()
{
    int n, m;
    while ( scanf ("%d %d", &n, &m) != EOF )
    {
        map<int, map<int, int>> mp;
        for(int i = 1; i <= n; i++)
        {
            int cur;
            scanf("%d", &cur);
            int cnt = mp[cur].size();
            mp[cur][cnt + 1] = i;
        }

        for(int i = 0; i < m; i++)
        {
            int a, b;
            scanf ("%d %d", &a, &b);
            if(!mp.count(b) || int(mp[b].size()) < a) printf("0\n");
            else printf("%d\n", mp[b][a]);
        }
    }
}

int main()
{
    solve();
    return 0;
}
