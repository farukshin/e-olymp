// https://www.e-olymp.com/ru/problems/10217
//#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
 
typedef long long ll;
typedef long double ld;

void solve()
{
	int n,m,s;
	scanf("%d %d %d\n", &n, &m, &s);
	int pre = m*60+s;
	
	int curM,curS;
	bool success = false;
	while((curM = curS = 0), (scanf("%d %d", &curM, &curS) == 2) && (curM || curS))
	{
		ll cur = curM*60 + curS;
		if(!success && cur-pre>5)
		{
			pre+=5;
			printf("%d %d", pre/60, pre%60);
			success = true;
		}
		pre = cur;
	}
	if(!success) 
		printf("0");
}		

int main()
{
    solve();
    return 0;
}