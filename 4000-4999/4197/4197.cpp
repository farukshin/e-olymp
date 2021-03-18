//https://www.e-olymp.com/ru/problems/4197
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{

    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        v.push_back({a * 60 + b + c * 60 + d, a * 60 + b});
    }
    sort(v.begin(), v.end());
    int ans = 1;
    int l = v[0].first;
    for(int i = 1; i < v.size(); i++)
        if(v[i].second > l)
            ans++, l = v[i].first;
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(6);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}