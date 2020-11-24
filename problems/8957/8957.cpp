//https://www.e-olymp.com/ru/problems/8957
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
    int arr[n], k = 0;
    bool succes = false;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            k++, succes = true;
    }
    if (!succes)
        cout << "NO" << endl;
    else
    {
        cout << k << endl;
        for (int i = n - 1; i >= 0; i--)
            if (arr[i] % 2 == 0)
                cout << arr[i] << ' ';
        cout << endl;
    }

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