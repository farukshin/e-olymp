// https://www.e-olymp.com/ru/problems/8296
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;

    int sum = 0, ans = 0;
    vector<int> v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i], sum += v[i];
    if(sum % n)
    {
        cout << -1;
        return;
    }

    int k = sum / n;
    for(int i = 0; i < n; i++)
        if(v[i] > k)
            ans += v[i] - k;
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin >> t; while(t--) solve();
    return 0;
}