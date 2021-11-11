// https://www.e-olymp.com/ru/problems/26
//#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
typedef long long ll;

struct p
{
    int first, second;
};

int min(int a, int b)
{
    if (a <= b)
        return a;
    else
        return b;
}
int max(int a, int b)
{
    if (a <= b)
        return b;
    else
        return a;
}

int cmp(p p1, p p2)
{
    int mm = min(min(p1.first, p1.second), min(p2.first, p2.second));
    if ((mm == p1.first) || (mm == p2.second))
        return 0;
    return 1;
}

void solve()
{
    int n, b;
    p v[301], curp;

    {
        int fir[301];
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
            scanf("%d", &fir[i]);

        for (int i = 0; i < n; i++)
            scanf("%d", &b), v[i].first = fir[i], v[i].second = b;
    }

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (cmp(v[i], v[j]))
            {
                curp = v[i];
                v[i] = v[j];
                v[j] = curp;
            }

    int ans = 0, a = 0;
    for (int i = 0; i < n; i++)
        a += v[i].first, ans = max(a, ans) + v[i].second;
    printf("%d", ans);
}

int main()
{
    solve();
    return 0;
}
