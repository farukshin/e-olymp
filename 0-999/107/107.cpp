//https://www.e-olymp.com/ru/problems/107
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

bool check(int i, int n)
{
    string s = to_string(i);
    int sum1 = (s[0] - '0') + (s[1] - '0') + (s[2] - '0');
    int sum2 = (s[3] - '0') + (s[4] - '0') + (s[5] - '0');
    if (sum1 == sum2 && sum1 == n && sum2 == n)
        return true;
    else
        return false;
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);
    int a, b, c, d, sum = 0;
    cin >> a;
    b = a;
    while (a > 99)
    {
        sum += 100;
        a -= 100;
    }
    while (a > 19)
    {
        sum += 30;
        a -= 20;
    }
    while (a > 0)
    {
        sum += 2;
        a -= 1;
    }
    for (int i = b; i <= b + 100; i++)
    {
        c = 0;
        d = i;
        while (d > 99)
        {
            c += 100;
            d -= 100;
        }
        while (d > 19)
        {
            c += 30;
            d -= 20;
        }
        while (d > 0)
        {
            c += 2;
            d -= 1;
        }
        if (c < sum)
        {
            sum = c;
        }
    }
    cout << sum;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}