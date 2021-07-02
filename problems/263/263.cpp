// https://www.e-olymp.com/ru/problems/263
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(100010);
    v[0] = 2;
    v[1] = 4;
    v[2] = 7;
    for(int i = 3; i < n; i++)
    {
        v[i] = (v[i - 1] + v[i - 2] + v[i - 3]) % 12345;
    }
    cout << v[n - 1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(3);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}