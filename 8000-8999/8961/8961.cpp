//https://www.e-olymp.com/ru/problems/8961
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;


void solve()
{
    int n;
    cin >> n;
    int arr[n];

    int minimum = 105, ind;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < minimum)
            minimum = arr[i], ind = i;
    }

    int cur = arr[ind];
    arr[ind] = arr[0];
    arr[0] = cur;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
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
    //int t; cin >> t; while (t--) solve();

    return 0;
}
