//https://www.e-olymp.com/ru/problems/9405
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n,a,b;
    cin>>n>>a>>b;
    int z = n-b;
    int x = a-z;
    int y = b-x;
    
    
    cout << x<<" "<<y<<" "<<z << endl;
    
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}