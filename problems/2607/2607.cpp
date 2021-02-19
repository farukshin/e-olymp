//https://www.e-olymp.com/ru/problems/2607
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    //cout.setf(std::ios::fixed);
    //cout.precision(4);

	int n;
	cin>>n;
	
	string s = to_string(n);
	int s1=0,s0=0;
	for(int i=0;i<s.size();i++)
		if(i%2)
			s0+= (s[i]-'0');
		else
			s1 += (s[i]-'0');
	cout<<s1*s0<<endl;
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