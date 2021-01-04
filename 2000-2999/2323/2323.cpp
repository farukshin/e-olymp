//https://www.e-olymp.com/ru/problems/2323
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    cin >> n;
    string s = to_string(n);
    int arr[10] = {0};

    for (auto ch : s)
        if (ch >= '0' && ch <= '9')
            arr[ch - '0']++;

    ll mx = 0, mn = 0;
    for (int i = 0; i < 10; i++)
        for (int j = 1; j <= arr[i]; j++)
            mn = mn * 10 + i;

    for (int i = 9; i >= 0; i--)
        for (int j = 1; j <= arr[i]; j++)
            mx = mx * 10 + i;

    cout << mx + mn << endl;
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
