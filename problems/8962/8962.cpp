//https://www.e-olymp.com/ru/problems/8962
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
    vector<int> v(n);
    int mx = -105;
    int mxInd = -1;
    ll ans = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(mx <= v[i])
            mx = v[i], mxInd = i;
    }

    int a = v[mxInd];
    v[mxInd] = v[n - 1];
    v[n - 1] = a;
    //swap(v[mxInd], v[n-1]);

    for(int i = 0; i < n; i++)
        cout << v[i] << " ";
    //cout<< ans<<endl;
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