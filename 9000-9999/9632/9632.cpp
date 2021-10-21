// https://www.e-olymp.com/ru/problems/9632
//#include <bits/stdc++.h>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;
typedef long long int ll;

void solve()
{
	int n,m;
	scanf("%d %d\n", &n,&m);
	vector<int> v(n);
	for(auto &d:v)
		scanf("%d", &d);
	sort(begin(v), end(v));
	
	int ans=0;
	bool success = false;
	for(auto cur = v.begin();cur!= v.end();cur++)
	{
		if(*cur > m) break;
		if(*cur > m - (*cur)) break;
		
		auto it = lower_bound(cur, end(v), m-(*cur));
		
		if(it != v.begin()){
			--it;
			ans = max(ans, *it + *cur);
			success = true;
			++it;
		}
		if(*it + *cur <= m && it!=cur)
		{
			ans = max(ans, *it + *cur);
			success = true;
		}
		else if(*it + *cur <= m && it==cur)
		{
			int c = *it;
			++it;
			if(it != v.end() && c==*it)
			{
				ans = max(ans, *it + *cur);
				success = true;
			}
		}
	}
	printf("%d", (success ? ans : -1));
}

int main()
{
	solve();
    return 0;
}