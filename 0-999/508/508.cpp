//https://www.e-olymp.com/ru/problems/508
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);
	
	string s;
	while(cin>>s)
	{
		//cout<<s<<endl;
		bool reg = false;
		int cVop =0, cZv=0;
		for(auto ch:s)
		{
			bool chReg = (ch=='?' || ch=='*');
			if(!chReg && reg)
				{
					cout<< (cZv>0?"*":"")<<string(cVop, '?');
					cZv =0, cVop = 0;
					reg = false;
					cout<<ch;
					
				}
			else if(!chReg && !reg)
				cout<<ch;
			else if(chReg)
			{
				reg = true;
				cVop += (ch =='?'?1:0);
				cZv += (ch =='*'?1:0);
			}
			
		}
		cout<< (cZv>0?"*":"")<<string(cVop, '?');
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