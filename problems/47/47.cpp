//https://www.e-olymp.com/ru/problems/47
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

int n, m;

int line(int a)
{
    if (a % 2 == 0)
        return line(a - 1);

    int res = a / (m * 2) + 1;
    return res;
}

int column(int a)
{
    if (a % 2 == 0)
        return column(a - 1);

    int res = (a % (m * 2)) / 2 + 1;

    return res;
}

int parketCount(int start, int finish)
{
    if (start == finish)
        return 0;

    if (start > finish)
        return parketCount(finish, start);

    int lineStart = line(start);
    int lineFinish = line(finish);
    if (lineStart == lineFinish)
        return abs(start - finish);

    int colStart = column(start);
    int colFinish = column(finish);
    if (colStart == colFinish)
        if (start % 2 == 1)
            return 1 + parketCount(start + 1, finish);
        else
            return 1 + parketCount(start + m * 2 - 1, finish);

    if (start % 2 == 1)
    {
        if (colStart > colFinish)
            return 1 + parketCount(start - 1, finish);
        else
            return 2 + parketCount(start + 2, finish);
    }
    else
    {
        return 1 + parketCount(start + m * 2 - 1, finish);
    }
}

void solve()
{
    cin >> m >> n;
    int a, b;
    cin >> a >> b;
    cout << parketCount(a, b) << endl;
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
