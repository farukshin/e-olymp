// https://www.eolymp.com/ru/problems/977
#include <cstdio>
#include <vector>
using namespace std;
typedef long long ll;

int n, cnt = 0;
bool fl = false;
const int MAXARR = 102;
bool used[MAXARR] = {false};
vector<int> ss[MAXARR];

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

void dfs(int node, int par)
{
    if (fl)
        return;
    used[node] = true;
    cnt++;
    for (auto chield : ss[node])
        if (chield != par)
        {
            if (used[chield])
                fl = true;
            else
                dfs(chield, node);
        }
}

void solve()
{
    read(n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            int a;
            read(a);
            if (j < i)
                continue;
            if (a == 1 && i == j)
            {
                printf("NO");
                return;
            }
            if (a == 1)
            {
                ss[i].push_back(j);
                ss[j].push_back(i);
            }
        }

    dfs(0, -1);
    if (cnt == n && !fl)
        printf("YES");
    else
        printf("NO");
}

int main()
{
    solve();
    return 0;
}
