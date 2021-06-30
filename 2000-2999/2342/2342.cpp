// https://www.e-olymp.com/ru/problems/2342
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

    int k, l;
    cin >> k >> l;

    cout << (v[n - k] > v[l - 1] ? ">" : (v[n - k] == v[l - 1] ? "=" : "<"));

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}