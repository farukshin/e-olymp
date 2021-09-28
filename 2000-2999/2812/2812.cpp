// https://www.e-olymp.com/ru/problems/2812
#include <cstdio>
using namespace std;

int runx[4] = {0, 1, 0, -1};
int runy[4] = {1, 0, -1, 0};

void solve()
{
    int n, m;
    scanf("%d %d\n", &n, &m);
    char v[101][101];

    for(int i = 0; i < n; i++)
    {
        char str[101];
        scanf("%s\n", str);
        for(int j = 0; j < m; j++)
            v[i][j] = str[j];
    }

    int ans = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(v[i][j] == '.')
                for(int k = 0; k < 4; k++)
                {
                    int ii1 = i + runx[k];
                    int jj1 = j + runy[k];
                    if(!(ii1 >= 0 && ii1 < n && jj1 >= 0 && jj1 < m)) continue;

                    int ii2 = i + runx[(k + 1) % 4];
                    int jj2 = j + runy[(k + 1) % 4];
                    if(!(ii2 >= 0 && ii2 < n && jj2 >= 0 && jj2 < m)) continue;

                    if(v[ii1][jj1] == '.' && v[ii2][jj2] == '.') ans++;
                }
    printf("%d", ans);
}

int main()
{
    solve();
    return 0;
}
