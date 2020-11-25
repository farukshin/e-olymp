//https://www.e-olymp.com/ru/problems/929
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(4);

    vector<ld> arr(4);
    for (int i = 0; i < 4; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    bool fl = arr[0] > 0 && arr[1] > 0 && arr[2] > 0 && arr[3] > 0 && arr[0] == arr[1] && arr[2] == arr[3]; // && arr[1] != arr[2] && arr[0] != arr[3];
    cout << (fl ? "YES" : "NO") << endl;
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