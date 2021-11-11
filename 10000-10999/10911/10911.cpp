// https://www.e-olymp.com/ru/problems/10911
#include <cstdio>
using namespace std;
typedef long long ll;

void solve()
{
    int n, ans = 0;
    scanf("%d\n", &n);
    int v[100005];
    for (int i = 0; i < n; i++)
        scanf("%d\n", &v[i]);

    int l, r;
    for (int i = 0; i < n - 1; i++)
    {
        if (i < n - 1 && v[i] != v[i + 1])
        {
            l = i, r = i + 1;
            while ((l - 1) >= 0 && (r + 1) < n && v[l - 1] == v[l] && v[r + 1] == v[r])
                l--, r++;
            if (r - l + 1 > ans)
                ans = r - l + 1;
            i = r - 1;
        }
    }
    printf("%d", ans);
}

int main()
{
    solve();
    return 0;
}
