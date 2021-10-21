// https://www.e-olymp.com/ru/problems/2664
//#include <bits/stdc++.h>
#include <cstdio>
#include <algorithm>

using namespace std;
typedef long long int ll;

void solve()
{
	int n;
	scanf("%d\n", &n);
	int v[105];
	for(int i=0;i<n;i++)
		scanf("%d", &v[i]);
		
	for(int i=1;i<n;i++)
	{
		int j= i;
		for(; j>0 && v[j-1]>v[j]; j--)
			swap(v[j-1],v[j]);
		if(j != i)
		{
			for(int a=0;a<n;a++)
				printf("%d ", v[a]);
			printf("\n");
		}
	}
}

int main()
{
	solve();
    return 0;
}