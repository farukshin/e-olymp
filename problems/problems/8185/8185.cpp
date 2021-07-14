// https://www.e-olymp.com/ru/problems/8185
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());

    int ans = INT_MAX;
    for(int i = 0; i < n / 2; i++)
        if(v[i] + v[n - i - 1] < ans)
            ans = v[i] + v[n - i - 1];

    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(2);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}