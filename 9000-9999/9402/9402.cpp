//https://www.e-olymp.com/ru/problems/9402
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
    //n=n*2-1;
    
    vector<vector<char>> v(n, vector<char>(m, ' '));
    
    for(int i=0;i<n;i++)
    	{
    		//v[0][i]='*';
    		//v[n-1][i]='*';
    		v[i][0]='*';
    		v[i][m-1]='*';
    		//if(i!=0 || i!=n-1)
    		//	v[i][i]='*', v[i][n-1-i]='*';
    	}
    	
    for(int i=0;i<m;i++)
    	{
    		v[0][i]='*';
    		v[n-1][i]='*';
    		//v[i][0]='*';
    		//v[i][n-1]='*';
    		//if(i!=0 || i!=n-1)
    		//	v[i][i]='*', v[i][n-1-i]='*';
    	}
    
    for(int i=0;i<n;i++)
    	{
    		for(int j=0;j<m;j++)
    			cout << v[i][j]<<(j==n-1?"":"");
    		if(i!=n-1)
    			cout<<endl;
    	}
    		
    //cout << c/(a-b)<< endl;
    
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