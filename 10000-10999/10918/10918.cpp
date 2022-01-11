// https://www.eolymp.com/ru/problems/10918
#include <cstdio>
using namespace std;
typedef long long ll;

const int MAXARR = 1005;
int n, m, cnt = 0, ans = 0, curAns;
int v[MAXARR][MAXARR];
bool used[MAXARR][MAXARR];

int runx[8] = {0, 1, 0, -1, 1, 1, -1, -1};
int runy[8] = {1, 0, -1, 0, 1, -1, 1, -1};

template <typename T>
inline void read(T &f)
{
    f = 0;
    T fu = 1;
    char c = getchar();
    while (c < '0' || c > '9')
    {
        if (c == '-')
            fu = -1;
        c = getchar();
    }
    while (c >= '0' && c <= '9')
    {
        f = (f << 3) + (f << 1) + (c & 15);
        c = getchar();
    }
    f *= fu;
}

template <typename T>
void print(T x)
{
    if (x < 0)
        putchar('-'), x = -x;
    if (x < 10)
        putchar(x + 48);
    else
        print(x / 10), putchar(x % 10 + 48);
}

template <typename T>
void print(T x, char t)
{
    print(x);
    putchar(t);
}

void dfs(int a, int b)
{
    used[a][b] = true;
    curAns++;
    for (int i = 0; i < 8; i++)
    {
        int aa = a + runx[i];
        int bb = b + runy[i];
        if (!(aa >= 0 && aa < n && bb >= 0 && bb < m))
            continue;

        if (!used[aa][bb])
            dfs(aa, bb);
    }
    if (curAns > ans)
        ans = curAns;
}

void solve()
{
    read(n), read(m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            read(v[i][j]);
            if (v[i][j] == 1)
                used[i][j] = false;
            else
                used[i][j] = true;
        }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (!used[i][j])
                cnt++, curAns = 0, dfs(i, j);

    print(cnt, '\n');
    print(ans);
}

int main()
{
    solve();
    return 0;
}
