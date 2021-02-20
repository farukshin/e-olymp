//https://www.e-olymp.com/ru/problems/2012
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
    int arr[n];
    for (int i = 0;i < n;i++)
        cin >> arr[i];

    int ans = 0, sum = 0;
    for (int i = 1;i < n;i++)
    {
        if (arr[i] == arr[i - 1] + 1)
            sum++;
        else sum = 0;
        if (sum > ans)
            ans = sum;
    }

    cout << ans + 1 << endl;



}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}