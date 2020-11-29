//https://www.e-olymp.com/ru/problems/7833
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, k, sum = 0;
    cin >> n;
    int arr[n] = { 0 };
    k = n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    ld sr = (ld)sum / (ld)k;

    sum = 0, k = 0;

    for (int i = 0; i < n; i++)
        if (sr < (ld)arr[i])
            sum += arr[i], k++;


    cout << sum << " " << k << endl;

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
