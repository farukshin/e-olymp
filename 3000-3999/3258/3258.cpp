// https://www.e-olymp.com/ru/problems/3258
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n + 1);
    v[0] = 0;
    v[1] = 1;
    for(int i = 2; i <= n; i++)
        v[i] = v[i - 1] + v[i - 2];
    cout << v[n];

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(4);

    solve();
    //int t; cin >> t; while(t--) solve();
    return 0;
}