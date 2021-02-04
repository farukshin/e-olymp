//https://www.e-olymp.com/ru/problems/8533
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

bool check(ll n)
{
    string s = to_string(n);
    int arr[10] = { 0 };
    for (auto ch : s)
        if (arr[ch - '0'] > 0)
            return false;
        else
            arr[ch - '0']++;
    return true;
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(1);

    ll a, b;
    cin >> a >> b;
    for (ll i = a; i <= b; i++)
        if (check(i))
            cout << i << " ";

    cout << endl;
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
