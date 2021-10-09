// https://www.e-olymp.com/ru/problems/610
//#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int getInt()
{
    int ans = 0;
    char c;
    bool start = false;
    while((c = getchar()) != EOF)
        if(c >= '0' && c <= '9')
            start = true, ans = ans * 10 + int(c - '0');
        else if(start && !(c >= '0' && c <= '9'))
            break;
        else if(!start && !(c >= '0' && c <= '9'))
            continue;
    return ans;
}

void solve()
{
    int n = getInt(), ans = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(getInt() == 1 && i < j)
                ans++;
    printf("%d", ans);
}

int main()
{
    solve();
    return 0;
}
