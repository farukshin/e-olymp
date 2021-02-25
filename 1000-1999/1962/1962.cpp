//https://www.e-olymp.com/ru/problems/1962
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

bool mysort(pair<int, int> p1, pair<int, int> p2)
{
    if(p1.second == p2.second)
        return p1.first < p2.first;
    else
        return p1.second > p2.second;
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    cin >> n;
    vector<pair<int, int>> v;

    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end(), mysort);
    for(auto s : v)
        cout << s.first << " " << s.second << endl;
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