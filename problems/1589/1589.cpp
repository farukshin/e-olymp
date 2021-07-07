// https://www.e-olymp.com/ru/problems/1589
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{

    int n;
    cin >> n;
    vector<pair<ll, int>> v(n);
    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v[i] = {ceil(1.0 * a / b), i};
    }
    sort(v.begin(), v.end());
    for(auto d : v)
        cout << d.second + 1 << " ";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}