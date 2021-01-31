//https://www.e-olymp.com/ru/problems/8640
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

bool check(int n)
{
    string s = to_string(n);
    for (auto ch : s)
        if (ch >= '0' && ch <= '9' && (ch - '0') % 2 == 0)
            return false;
    return true;
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(1);

    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
        if (check(i))
            cout << i << " ";
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
