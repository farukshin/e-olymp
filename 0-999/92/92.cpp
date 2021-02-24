//https://www.e-olymp.com/ru/problems/92
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n, p;
    cin >> n >> p;

    vector<int> v(p);
    ll sum = 0;
    for(int i = 0; i < p; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    if(n >= p)
    {
        cout << sum << endl;
        return;
    }

    sort(v.begin(), v.end(), greater<int>());
    sum = 0;
    for(int i = 0; i < n; i++)
        sum += v[i];
    cout << sum << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    //solve();
    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}