//https://www.e-olymp.com/ru/problems/2097
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

	int a,b;
	cin>>a>>b;
	
	for(int i = a ; i<= b ; i++)
		{
			int x = i/100;
			int y = (i/10)%10;
			int z = i%10;
			if(x!=y && x!=z && y!=z)
				cout<<i<<endl;
		}
    
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