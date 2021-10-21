// https://www.e-olymp.com/ru/problems/10257
//#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

void solve()
{
	int n;
	scanf("%d", &n);
	vector<int> v(n);
	for(int i=0;i<n;i++) 
		scanf("%d", &v[i]);
	sort(begin(v),end(v));
	int ans=1, curw = v[0];
	for(int i=1;i<n;i++)
		if(v[i]>= 2*curw)
			ans++, curw+=v[i];
	printf("%d", ans);
}		

int main()
{
	solve();
    return 0;
}