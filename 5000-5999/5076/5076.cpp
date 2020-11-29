//https://www.e-olymp.com/ru/problems/5076
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, m;
    cin >> n >> m;
    int arr[n] = { 0 };

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        --a, --b;
        arr[a]++, arr[b]++;
    }

    bool success = true;
    for (int i = 1; i < n && success; i++)
        if (arr[i - 1] != arr[i])
            success = false;

    cout << (success ? "YES" : "NO") << endl;



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
