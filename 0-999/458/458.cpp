// https://www.e-olymp.com/ru/problems/458
#include <cstdio>
using namespace std;
typedef long long ll;

void solve()
{
    int n, m;
    scanf("%d %d\n", &m, &n);
    char v[n][m], a[n][m], ch;
    //scanf("%c", ch);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            scanf("%c", &v[i][j]);
        scanf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            scanf("%c", &a[i][j]);
        scanf("\n");
    }

    char s[10];
    scanf("%s", s);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (v[i][j] == '0' && a[i][j] == '0')
                v[i][j] = s[0];
            else if (v[i][j] == '0' && a[i][j] == '1')
                v[i][j] = s[1];
            else if (v[i][j] == '1' && a[i][j] == '0')
                v[i][j] = s[2];
            else if (v[i][j] == '1' && a[i][j] == '1')
                v[i][j] = s[3];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%c", v[i][j]);
        printf("\n");
    }
}

int main()
{
    solve();
    return 0;
}
