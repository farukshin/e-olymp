//https://www.e-olymp.com/ru/problems/1345
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    //cout.setf(std::ios::fixed);
    //cout.precision(6);

    int x, y, z, n;
    cin >> x >> y >> z >> n;

    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v.push_back({a * x + b * y + c * z, i + 1});
    }

    sort(v.begin(), v.end(), greater<pair<int, int>>());
    cout << v[0].first + v[1].first + v[2].first << endl
         << v[0].second << " " << v[1].second << " " << v[2].second << endl;

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