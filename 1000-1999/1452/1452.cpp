//https://www.e-olymp.com/ru/problems/1452
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int ans=1, cur =0;
    int n,k;
    cin>>n>>k;
    for(cur = 1; cur<=n; cur++)
    	{
    		if(ans>k)
    			ans-=k;
    		ans *=2;
    	}
    
    
    cout << ans << endl;
    
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