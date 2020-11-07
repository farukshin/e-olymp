//https://www.e-olymp.com/ru/problems/8968
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    int arr[n];

    int a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (!i)
            a = arr[0], b = arr[0];
        else
            a = max(a, arr[i]), b = min(b, arr[i]);
    }
    a /= 2, b /= 2;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            arr[i] -= a;
        else if (arr[i] < 0)
            arr[i] -= b;
        cout << arr[i] << " ";
    }
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
