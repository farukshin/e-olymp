//https://www.e-olymp.com/ru/problems/8973
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;


void solve()
{
    int n;
    cin >> n;

	set<ll> st;
    vector<ll> arr(n,0), ans;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    reverse(arr.begin(), arr.end());
    
    
    for (int i = 0; i < n; i++)
        if(!st.count(arr[i]))
        	{
        		st.insert(arr[i]);	
        		ans.push_back(arr[i]);
        	}

    reverse(ans.begin(), ans.end());

	for(auto a : ans)
		cout<< a <<" ";
		
	cout<<endl;


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