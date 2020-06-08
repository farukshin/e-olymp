//https://www.e-olymp.com/ru/problems/1146
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}

int getAns(int n)
{
    int ans = 0;
    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            ans += gcd(i, j);
    return ans;
}

void solve()
{
    int n;
    while (cin >> n && n != 0)
        cout << getAns(n) << endl;
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
