// https://www.e-olymp.com/ru/problems/7229
//#include <bits/stdc++.h>
#include <cstdio>
#include <map>
#include <vector>
#include <queue>
#include <climits>

using namespace std;
typedef long long ll;
typedef long double ld;

int MAXARR = 50*50+5;
int n,m,k;
int ans=-1;
map<pair<int,int>, int> mp;
vector<vector<int>> v;
vector<pair<int,int>> pairs;
vector<vector<int>> ms;
bool used[25005] = {false};
int cntNode;
int finishNodeId;

int runx[4] = {0,1,0,-1};
int runy[4] = {1,0,-1,0};

int getnodeId(int a, int b)
{
	if(mp.count({a,b})) return mp[{a,b}];
	else return -1;
}

void bfs(int x, int y)
{
	bool usedNode[n*m] = {false};
	
	queue<pair<int, pair<int,int>>> q;
	q.push({0, {x,y}});
	usedNode[x*m+y] = true;
	auto nodeIdStart = getnodeId(x,y);
	
	while(!q.empty())
	{
		auto cur = q.front();
		q.pop();
		
		int len = cur.first;
		int a = cur.second.first;
		int b = cur.second.second;
		
		for(int i=0;i<4;i++)
		{
			int aa = a+runx[i];
			int bb = b+runy[i];
			if(aa>=0 && aa<n && bb>=0 && bb<m && v[aa][bb] != 1 && !usedNode[aa*m+bb])
			{
				usedNode[aa*m+bb] = true;
				q.push({len+1, {aa,bb}});
				auto curNodeId = getnodeId(aa,bb);
				if( curNodeId != -1 && ms[nodeIdStart][curNodeId] > len+1)
					ms[nodeIdStart][curNodeId] = len+1;
			}
		}
	}
}

void dfs(int node, int curLen, int curAns)
{
	if(node == finishNodeId)
	{
		ans=max(ans, curAns);
		return;
	}
	else if(curLen >= k)
		return;
		
	used[node] = true;
	for(int i=0;i<cntNode;i++)
		if(!used[i] && node!=i && ms[node][i] != INT_MAX && curLen + ms[node][i] <= k)
			dfs(i, curLen+ms[node][i], curAns+(i == finishNodeId ? 0: 1));
	
	used[node] = false;
}

void solve()
{
	scanf("%d %d %d\n", &n, &m, &k);
	v.assign(n, vector<int>(m));
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{
			scanf("%d", &v[i][j]);
			if(v[i][j] == 2 || i==0&&j==0 || i==n-1&&j==m-1) 
				pairs.push_back({i,j});
		}
	if(n==1 && m==1) {printf("0"); return;}
	
	cntNode = pairs.size();
	finishNodeId = cntNode-1;
	ms.assign(cntNode, vector<int>(cntNode, INT_MAX));
	
	for(int i=0;i<pairs.size();i++)
		mp[{pairs[i].first, pairs[i].second}] = i;
	
	for(int i=0;i<cntNode;i++)
		ms[i][i]=0;
	
	for(auto p:pairs)
		bfs(p.first, p.second);
	
	if(ms[0][1]==INT_MAX) {printf("-1");return;}
	
	dfs(0, 0, 0);
	printf("%d", ans);
}		

int main()
{
	solve();
    return 0;
}