// https://www.eolymp.com/ru/problems/10922
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    cout << (m >= 2 && n >= 18 || n < 18 && k >= 2 ? "Yes" : "No");
}

int main()
{
    solve();
    return 0;
}
