//https://www.e-olymp.com/ru/problems/329
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

	string s;
	getline(cin,s);
	int ans =0;
	bool world = false;
	
	for(int i=0; i < s.size(); i++)
		{
			auto ch = s[i];
			char pre = (i!=0?s[i-1]:'$'), sled = (i!=s.size()-1?s[i+1]:'$');
			if(ch==' ' && world)
				world = false;
			else if(ch==' ' && !world)
				continue;
			else if(ch!=' ' && world)
				continue;
			else if(ch=='-' && pre==' ' && sled==' ')
				continue;
			else if(ch!=' ' && !world)
				world = true, ans++;
		}
		
	cout<<ans<<endl;
    
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