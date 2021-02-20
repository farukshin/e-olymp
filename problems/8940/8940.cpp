//https://www.e-olymp.com/ru/problems/8940
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
	
	
	vector<vector<char>> v(n, vector<char>(m, '#'));
	
	//for(int i=0;i<n;i++)
	//	v[i][0]='*', v[i][m-1]='*';
		
	//for(int i=0;i<m;i++)
	//	v[0][i]='*', v[n-1][i]='*';
		
	for(int i=0;i<n;i++)
	{	
		for(int j=0;j<m;j++)
			cout<<v[i][j];
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