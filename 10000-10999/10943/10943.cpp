// https://www.eolymp.com/ru/problems/10943
#include <cstdio>
using namespace std;
typedef long long ll;

void solve()
{
    int ans = 0;
    char ch;
    while (scanf("%c", &ch) != EOF)
        if (ch >= '0' && ch <= '9')
            ans++;
    printf("%d", ans);
}

int main()
{
    solve();
    return 0;
}
