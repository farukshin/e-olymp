//https://www.e-olymp.com/ru/problems/972
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;

    vector<tuple<int, int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v.push_back(make_tuple(a, b, c));
    }

    sort(v.begin(), v.end());
    for (auto a : v)
        cout << get<0>(a) << " " << get<1>(a) << " " << get<2>(a) << endl;
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