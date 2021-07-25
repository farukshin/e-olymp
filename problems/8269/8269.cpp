// https://www.e-olymp.com/ru/problems/8269
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    vector<int> v(4);
    for(int i = 0; i < 4; i++)
        cin >> v[i];
    sort(begin(v), end(v));

    cout << v[0] << " " << v[2] << " " << v[1] << " " << v[3];
}

int main()
{
    //cout.setf(std::ios::fixed); cout.precision(6);

    solve();
    //int t; cin >> t; while (t--) solve();
    return 0;
}