// https://www.eolymp.com/ru/problems/10998
//#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
typedef long long ll;

void solve()
{
    char s[17];
    int mn = 100000, mx = -1;
    int ans1 = 0, ans2 = 0;
    while (scanf("%16s", &s) == 1)
    {
        int salary = 1000 * (s[12] - '0') + 100 * (s[13] - '0') + 10 * (s[14] - '0') + 1 * (s[15] - '0');

        if (salary == mn)
            ans1++;
        else if (salary < mn)
            mn = salary, ans1 = 1;

        if (salary == mx)
            ans2++;
        else if (salary > mx)
            mx = salary, ans2 = 1;
    }
    printf("%d %d\n%d %d", mn, mx, ans1, ans2);
}

int main()
{
    solve();
    return 0;
}
