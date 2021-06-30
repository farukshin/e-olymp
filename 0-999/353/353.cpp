// https://www.e-olymp.com/ru/problems/353
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);

    int ans1 = 0, cur = 0;
    cin >> v[0] >> v[1] >> v[2] >> v[3];
    cur = v[0] + v[1] + v[2] + v[3];
    ans1 = cur;

    for(int i = 4; i < n; i++)
    {
        cin >> v[i];
        cur += v[i] - v[i - 4];
        if(cur > ans1) ans1 = cur;
    }

    if(n == 4)
    {
        cout << ans1;
        return;
    }

    int ans = 0;
    int mx = 0, ind;
    for(int i = 0; i < n - 1; i++)
        if(v[i] + v[i + 1] > mx)
            mx = v[i] + v[i + 1], ind = i;
    ans += mx;
    v[ind] = -1;
    v[ind + 1] = -1;

    mx = 0;
    for(int i = 0; i < n - 1; i++)
        if(v[i] + v[i + 1] > mx)
            mx = v[i] + v[i + 1], ind = i;
    ans += mx;

    cout << max(ans, ans1);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t;cin >> t;while (t--)solve();

    return 0;
}