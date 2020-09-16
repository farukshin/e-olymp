//https://www.e-olymp.com/ru/problems/176
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    int max = 0, k = 0;

    for (int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        if (max < cur)
            max = cur, k = 1;
        else if (max == cur)
            k++;
    }

    cout << k << endl;
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
