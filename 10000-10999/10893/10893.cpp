// https://www.e-olymp.com/ru/problems/10893
#include <cstdio>

using namespace std;
typedef long long ll;

void solve()
{
    int n, ans = 0;
    scanf("%d\n", &n);
    while (n > 1)
    {
        if (n % 3)
            n--;
        else
            n /= 3;
        ans++;
    }
    printf("%d", ans);
}

int main()
{
    solve();
    return 0;
}
