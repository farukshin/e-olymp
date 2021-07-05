// https://www.e-olymp.com/ru/problems/5802
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    vector<int> v(3, 0);
    int n, l;
    cin >> n >> l;
    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a] += (b == -1 ? 1 : (b > l ? 3 : 2) );
    }
    cout << v[1] << ":" << v[2];
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