//https://www.e-olymp.com/ru/problems/468
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

int MAX = 2147483647;
int MIN = -2147483648;

void solve()
{
    int prev, cur;
    scanf("%d", &prev);
    while (scanf("%d", &cur) == 1)
    {
        if (cur < MIN || cur > MAX)
        {
            cout << "NO" << endl;
            return;
        }
        if (cur > prev)
            MIN = prev;
        else
            MAX = prev;
        prev = cur;
    }
    cout << "YES" << endl;
}

int main()
{
    ios_b;
#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif
    solve();
    return 0;
}
