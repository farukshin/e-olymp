//https://www.e-olymp.com/ru/problems/8959
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;


void solve()
{
    int n;
    cin >> n;
    int mx = -105, mn = 105;

    int arr[n] = { 0 };
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (mx < arr[i]) mx = arr[i];
        if (mn > arr[i]) mn = arr[i];
    }
    cout << mx - mn << endl;

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
