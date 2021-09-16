//https://www.e-olymp.com/ru/problems/380
#include <cstdio>
using namespace std;

int n;
char v[4][4];

bool isArea(int a, int b)
{
    return a >= 0 && a < n && b >= 0 && b < n && v[a][b] != 'X';
}

void solve()
{
    scanf("%d\n", &n);
    char ch;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            scanf("%c", &v[i][j]);
        scanf("\n", &ch);
    }

    int vv[4][4];
    for(int i = 0; i < 16; i++)
        for(int j = 0; j < 16; j++)
            vv[i][j] = -1;

    int ss[16][16];
    for(int i = 0; i < 16; i++)
        for(int j = 0; j < 16; j++)
            ss[i][j] = -1;

    int cnt = -1;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(v[i][j] == '.')
                vv[i][j] = ++cnt;
    cnt++;

    int chields[16];
    for(int i = 0; i < 16; i++) chields[i] = -1;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(v[i][j] != 'X')
            {
                int node = vv[i][j];
                int aa = i, bb = j;
                while(isArea(--aa, bb))
                {
                    int to = vv[aa][bb];
                    ss[node][++chields[node]] = to, ss[to][++chields[to]] = node;
                }
                aa = i, bb = j;
                while(isArea(aa, --bb))
                {
                    int to = vv[aa][bb];
                    ss[node][++chields[node]] = to, ss[to][++chields[to]] = node;
                }
            }

    int ans = 0;
    for(int i = 0; i < (1 << cnt); i++)
    {
        int curAns = 0;
        for(int j = 0; j < cnt; j++)
            if(i & (1 << j))
            {
                curAns++;
                bool success = true;
                for(int k = 0; k < 16; k++)
                    if(ss[j][k] >= 0 && i & (1 << ss[j][k]))
                    {
                        success = false;
                        curAns = 0;
                        break;
                    }
                if(!success) break;
            }
        ans = curAns > ans ? curAns : ans;
    }
    printf("%d", ans);
}

int main()
{
    solve();
    return 0;
}
