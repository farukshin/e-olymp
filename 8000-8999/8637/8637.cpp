//https://www.e-olymp.com/ru/problems/8637
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

bool mysort(const pair<int, int> &a,
            const pair<int, int> &b)
{
    if (a.first + a.second != b.first + b.second)
        return a.first + a.second < b.first + b.second;
    else
        return a.first < b.first;
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int a, b;
    vector<pair<int, int>> v;
    while (cin >> a >> b)
        v.push_back({a, b});

    sort(v.begin(), v.end(), mysort);

    for (auto p : v)
        cout << p.first << " " << p.second << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}