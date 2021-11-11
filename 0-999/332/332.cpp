// https://www.e-olymp.com/ru/problems/332
//#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
using namespace std;

void solve()
{
    const int MAXLEN = 1000005;
    char s[MAXLEN];
    scanf("%s", s);
    int n = strlen(s);
    for (int i = n; i < n * 2; i++)
        s[i] = s[i - n];
    n = n << 1;
    s[n] = '\0';

    int i = 0, ans = 0;
    while (i < n / 2)
    {
        ans = i;
        int j = i + 1, k = i;
        while (j < n && s[k] <= s[j])
        {
            if (s[k] < s[j])
                k = i;
            else
                ++k;
            ++j;
        }
        while (i <= k)
            i += j - k;
    }
    for (int i = ans; i < ans + n / 2; i++)
        printf("%c", s[i]);
}

int main()
{
    solve();
    return 0;
}
