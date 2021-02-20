//https://www.e-olymp.com/ru/problems/9399
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    cin>>n;
    //n=n*2-1;
    
    vector<vector<char>> v(n, vector<char>(n, '*'));
    
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    	{
    		//if(i<=n-1-j)
    		//	v[i][j]='*';
    		//v[0][i]='*';
    		//v[n-1][i]='*';
    		//v[i][0]='*';
    		//v[i][m-1]='*';
    		//if(i!=0 || i!=n-1)
    		//	v[i][i]='*', v[i][n-1-i]='*';
    	}
    	
    
    
    for(int i=0;i<n;i++)
    	{
    		for(int j=0;j<n;j++)
    			cout << v[i][j]<<(j==n-1?"":"");
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