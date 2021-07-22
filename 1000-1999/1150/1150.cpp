// https://www.e-olymp.com/ru/problems/1150
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int n, m;
vector<int> v;

void loadInput()
{
    cin >> n >> m;
    v.resize(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
}

void solve()
{
    loadInput();
    for(int i = 0; i < m; i++)
    {
        int a, b, k;
        cin >> a >> b >> k;
        --a, --b;
        auto vv = v;
        nth_element(vv.begin() + a, vv.begin() + a + k - 1, vv.begin() + b + 1);
        cout <<  *(vv.begin() + a + k - 1) << "\n";
    }
}

int main()
{
    solve();
    //int t; cin >> t; while (t--) solve();
    return 0;
}