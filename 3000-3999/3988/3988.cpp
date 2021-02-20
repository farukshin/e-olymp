//https://www.e-olymp.com/ru/problems/3988
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(ios::fixed);
    // cout.precision(0);
    int n,m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(n,0));
    for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		--a,--b;
		v[a][b]=1;
		v[b][a]=1;
	}
	
	
	for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(v[i][j]) { 
                for(int z = 0; z < n; z++) {
                    if(v[j][z] && !v[i][z] && z!=i) { 
                        cout << "NO";
                        return;
                    }   
                }   
            }
        }
    }
    cout << "YES";
	
    
    //cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}