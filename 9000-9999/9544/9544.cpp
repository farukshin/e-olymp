// https://www.e-olymp.com/ru/problems/9544
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int ans=0;
string s;
int l,r;

bool check()
{
	int sz = r-l + 1;
	if(sz%2) return false;
	
	for(int i=0;i<sz/2;i++)
		if(s[i]!=s[r-i])
			return false;
	ans++, r=sz/2-1; 
	return true;
}

void solve()
{
	cin>>s;
	l=0, r = s.size()-1;
	while(check());
	cout<<s.substr(l, r-l+1)<<"\n"<<ans;
}		

int main()
{
	solve();
    return 0;
}