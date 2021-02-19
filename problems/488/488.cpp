//https://www.e-olymp.com/ru/problems/488
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n,0));
    
    int i=0, j=0, k=1, curLine=0;
    bool left=true, newLine = true;
    
    while(true)
    {
    	v[i][j] = k;
    	k++;
    	curLine++;
    	
    	if(curLine == n)
    		i++, left = !left , newLine = true, curLine=0;
    	else 
    		j+= (left?1:-1), newLine = false;
    		
    	if(i==n && curLine == 0)
    		break;
    	
    }
    
    for(int i =0;i <n;i++)
    	{
    		for(int j =0;j <n;j++)
    			cout<<v[i][j]<<" ";
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