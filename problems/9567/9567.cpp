//https://www.e-olymp.com/ru/problems/9567
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
	
	vector<vector<int>> v(n, vector<int>(m));
	
	for(int i=0;i<n;i++)
	{
		int k=0;
		for(int j=0;j<m;j++)
		{
			int cur;
			cin>>cur;
			if(cur==0)
				k++;
			else
				cout<< cur<<" ";
		}
		for(int l=0;l<k;l++)
			cout<< 0 <<" ";
		cout<<endl;
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