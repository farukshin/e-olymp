// https://www.eolymp.com/ru/problems/10609
#include <iostream>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, ans = 0;
    cin >> n;
    for (int a = 1; a <= n; a++)
        for (int b = 1; b <= n; b++)
        {
            if (a * b > n)
                break;
            for (int c = 1; c <= n; c++)
                if (a * b * c <= n)
                    ans++;
                else
                    break;
        }
    cout << ans;
}

int main()
{
    solve();
    return 0;
}
