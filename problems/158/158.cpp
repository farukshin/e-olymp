//https://www.e-olymp.com/ru/problems/158
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

const int MAXARR = 1e4 + 5;
string dp[MAXARR];
bool calc[MAXARR];

string sumStrNum(string a, string b)
{
    for (int j = 0; j < a.length() / 2; j++)
        swap(a[j], a[a.length() - j - 1]);

    for (int j = 0; j < b.length() / 2; j++)
        swap(b[j], b[b.length() - j - 1]);

    if (a.length() < b.length())
        swap(a, b);

    int j, ost = 0;
    for (j = 0; j < b.length(); j++)
    {
        ost += a[j] + b[j] - 96;
        a[j] = ost % 10 + 48;
        ost /= 10;
    }

    while (ost)
    {
        if (j == a.length())
            a += ost + 48, ost = 0;
        else
        {
            ost += a[j] - 48;
            a[j] = ost % 10 + 48;
            ost /= 10;
            j++;
        }
    }
    for (j = 0; j < a.length() / 2; j++)
        swap(a[j], a[a.length() - j - 1]);
    return a;
}

string fib(int fibo)
{
    if (calc[fibo])
        return dp[fibo];

    calc[fibo] = true;

    return dp[fibo] = sumStrNum(sumStrNum(fib(fibo - 1), fib(fibo - 2)), sumStrNum(fib(fibo - 3), fib(fibo - 4)));
}

void solve()
{
    int n;
    cin >> n;

    for (int i = 0; i <= 4; i++)
    {
        dp[i] = "1";
        calc[i] = true;
    }

    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        cout << fib(tmp) << endl;
    }
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
