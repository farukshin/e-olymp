//https://www.e-olymp.com/ru/problems/8865
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(3);

    string s, s2;
    cin >> s >> s2;
    int a = s[s.size() - 1];
    int b = s2[s2.size() - 1];
    if ((a % 2 == 0 and b % 2 == 0) or (a % 2 == 1 and b % 2 == 1))
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
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