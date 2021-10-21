// https://www.e-olymp.com/ru/problems/4803
//#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
#include <cstring>
#include <cassert>
#include <algorithm>
using namespace std;
typedef long long int ll;

struct TwoSAT
{
	static const int MAXV=400005;

	int n, cnt;
	vector<int> g[MAXV], rg[MAXV];
	bool vis[MAXV];
	int order[MAXV], comp[MAXV];

	void init(int curn)
	{
		n=curn;
		for(int i=0;i<n;i++)
			g[i].clear(),  rg[i].clear();		
	}

	void add(int u, int v)
	{
		g[u].push_back(v),  rg[v].push_back(u);
	}
	
	void add_clause(int i, bool f, int j, bool g) {
        assert(0 <= i && i < n);
        assert(0 <= j && j < n);
        add(2 * i + (f ? 0 : 1), 2 * j + (g ? 1 : 0));
        add(2 * j + (g ? 0 : 1), 2 * i + (f ? 1 : 0));
    }

	void dfs1(int u)
	{
		vis[u] = true;
		for(auto it:g[u])
			if(!vis[it])
				dfs1(it);
		order[cnt++] = u;
	}

	void dfs2(int u, int c)
	{
		comp[u] = c;
		for(auto it:rg[u])
			if(comp[it]==-1)
				dfs2(it, c);
	}

	int solve(vector<int> &ans)
	{
		cnt=0;
		memset(vis, 0, sizeof(vis));
		for(int i=0;i<n;i++)
			if(!vis[i])
				dfs1(i);
		memset(comp, -1, sizeof(comp));
		int grp=0;
		for(int i=n-1;i>=0;i--)
		{
			int u=order[i];
			if(comp[u] == -1)
				dfs2(u, grp++);
		}
		for(int i=0;i<n;i+=2)
			if(comp[i]==comp[i^1])
				return 0;
		ans.clear();
		for(int i=0;i<n;i+=2)
		{
			int choose = (comp[i] > comp[i^1]) ? i : (i^1);
			ans.push_back(choose);
		}
		return 1;
	}
};

void solve()
{
	int n,m;
	TwoSAT twosat;
	scanf("%d %d\n", &n, &m);
	twosat.init(4*n);
	
	for(int i=0;i<n;i++)
	{
		int a,b;
		scanf("%d %d\n", &a, &b);
		twosat.add_clause(--a, true, --b, true);
	}
	for(int i=0;i<m;i++)
	{
		int a,b;
		scanf("%d %d\n", &a, &b);
		twosat.add_clause(--a, false, --b, false);
	}
	
	vector<int> ans;
	bool success = twosat.solve(ans);
	if(success)
		for(int i=0;i<n;i++)
			printf("%d ", ans[i]+1);
	else
		{printf("-1\n"); return;}
}

int main()
{
	solve();
    return 0;
}