// https://www.e-olymp.com/ru/problems/2663
//#include <bits/stdc++.h>
#include <cstdio>
#include <algorithm>

using namespace std;
typedef long long int ll;

void solve()
{
	int n;
	scanf("%d\n", &n);
	int v[1002];
	for(int i=0;i<n;i++)
		scanf("%d", &v[i]);
		
	int cnt=0;
	for(int i = 1; i < n; i++)
		for(int r = 0; r < n-i; r++)
			if(v[r] > v[r+1])
				swap(v[r], v[r+1]), cnt++;
	printf("%d", cnt);
}

int main()
{
	solve();
    return 0;
}