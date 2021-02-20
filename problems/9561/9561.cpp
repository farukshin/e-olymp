//https://www.e-olymp.com/ru/problems/9561
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

	int n,m;
	cin>>n>>m;
	vector<int> v(m, -105);
	
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			{
				int cur;
				cin>>cur;
				if(cur> v[j])
					v[j]=cur;
			}
			
    for(auto f:v)
    	cout<<f<<" ";
    	
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