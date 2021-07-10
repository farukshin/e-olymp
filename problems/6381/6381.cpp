// https://www.e-olymp.com/ru/problems/6381
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, p;

    while(cin >> n >> p)
    {
        if(n == 0) break;
        vector<int> v;
        int a = (p % 2 == 0 ? p - 1 : p + 1);
        v.push_back(a);
        v.push_back(n - a + 1), v.push_back(n - p + 1);
        sort(v.begin(), v.end());
        for(auto d : v)
            cout << d << " ";
        cout << "\n";
    }
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