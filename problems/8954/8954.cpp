//https://www.e-olymp.com/ru/problems/8954
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(4);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = n - 1; i >= 0; i--)
        cout << arr[i] << ' ';

    //cout << ((a * b) % 2 == 0 ? 0 : 1) << endl;
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