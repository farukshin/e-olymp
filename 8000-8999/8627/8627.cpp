//https://www.e-olymp.com/ru/problems/8627
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(1);

    int n;
    int arr[5] = { 0 }, ans[5] = { 0 };

    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    ans[0] = arr[0], ans[4] = arr[4];
    ans[1] = arr[0] + arr[2];
    ans[2] = arr[1] + arr[3];
    ans[3] = arr[2] + arr[4];

    for (int i = 0; i < 5; i++)
        cout << ans[i] << " ";
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
