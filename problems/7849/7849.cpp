//https://www.e-olymp.com/ru/problems/7849
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
    int arr[n] = {0}, aMax = -105, aMin = 105;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (aMax < arr[i])
            aMax = arr[i];
        if (aMin > arr[i])
            aMin = arr[i];
    }

    for (int i = 0; i < n; i++)
        if (arr[i] == aMax)
            cout << aMin << " ";
        else if (arr[i] == aMin)
            cout << aMax << " ";
        else
            cout << arr[i] << " ";
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