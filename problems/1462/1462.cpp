//https://www.e-olymp.com/ru/problems/1462
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
        for (int j = 1; j < (n - i); j++)
            if (arr[j] % 10 < arr[j - 1] % 10)
                swap(arr[j - 1], arr[j]);
            else if (arr[j] % 10 == arr[j - 1] % 10 and arr[j] < arr[j - 1])
                swap(arr[j - 1], arr[j]);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    ios_b;
#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif
    solve();
    return 0;
}
