//https://www.e-olymp.com/ru/problems/8964
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
    int mx = -108, k;

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i] == mx)
            k++;
        else if(mx < v[i])
            mx = v[i], k = 1;
    }

    for(int i = 0; i < n; i++)
        if(v[i] != mx)
            cout << v[i] << " ";
    for(int i = 0; i < k; i++)
        cout << mx << " ";
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