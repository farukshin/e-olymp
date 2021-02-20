//https://www.e-olymp.com/ru/problems/443
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

	int n,k;
	cin>>n>>k;
	vector<pair<int, string>> v;
	
	for(int i=0;i<n;i++)
	{
		int cur; string s;
		cin>>s>>cur;
		v.push_back({cur,s});
	}
	sort(v.begin(), v.end());
	
	set<string> ans;
	for(int i=0;i<min(n,k);i++)
		ans.insert(v[i].second);
		
	for(auto f:ans)
		cout<<f<<endl;
    
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