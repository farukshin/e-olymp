//https://www.e-olymp.com/ru/problems/9878
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);



    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    if(v.size() == 1)
    {
        cout << 1 << endl;
        return;
    }
    int pre = v[0], ans = 1;
    for(int i = 1; i < n; i++)
    {
        if(pre + v[i] > x)
            break;
        pre = v[i];
        ans++;
    }

    cout << ans << endl;

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