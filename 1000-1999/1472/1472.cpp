//https://www.e-olymp.com/ru/problems/1472
#include <bits/stdc++.h>
#include <cstdio>
#include <map>
#include <vector>
#include <queue>
#include <climits>

using namespace std;
typedef long long ll;
typedef long double ld;

pair<int,int> start, finish;
vector<string> v(4);
int dist[4][4] = {INT_MAX};

int runx[4] = {0,1,0,-1};
int runy[4] = {1,0,-1,0};

void check(string s, int a)
{
	for(int i=0;i<s.size();i++)
		if(s[i] == 'S')
			start = {a, i};
		else if(s[i] == 'E')
			finish = {a, i};
}

bool isArea(int a, int b)
{
	return a>=0 && a<4 && b>=0 && b<4;
}

bool freeZone(pair<int,int> &p)
{
	int a = start.first;
	int b = start.second;
	for(int i=0;i<4;i++)
	{
		int aa = a+runx[i];
		int bb = b+runy[i];
		if(!isArea(aa,bb)) continue;
		if(v[aa][bb] == '.')
		{
			p = {aa,bb};
			return true;
		}
	}
	return false;
}

void bfs()
{
	bool used[4][4];
	for(int i=0;i<4;i++)
		for(int j=0;j<4;j++)
			used[i][j] = false;
	
	int x = start.first;
	int y = start.second;
	dist[x][y] = 0;
	used[x][y] = true;
	queue<pair<int, pair<int,int>>> q;
	q.push({0, {x,y}});
	
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
			if(!isArea(aa,bb)) continue;
			if(!used[aa][bb] && v[aa][bb] != '#')
				used[aa][bb] = true, dist[aa][bb] = len+1;
		}
	}
	
}

void dfs(int a, int b, pair<int,int> fz, int len)
{
	bool fl = freeZone(fz);
	
	for(int i=0;i<4;i++)
	{
		int aa = a+runx[i];
		int bb = b+runy[i];
		if(!isArea(aa,bb)) continue;
		
		int addLen = (v[aa][bb] == '#' ? 2 : 1);
		if(len + addLen < dist[aa][bb])
		{
			dist[aa][bb] = len + addLen;
			swap(v[aa][bb], v[fz.first][fz.second]);
			dfs(aa, bb, {a,b}, len + addLen);
			swap(v[aa][bb], v[fz.first][fz.second]);
		}
	}
}



void solve()
{
	string s;
	
	while(cin>>s)
	{
		v[0]=s;
		check(s, 0);
		for(int i=1;i<4;i++)
			cin>>v[i], check(v[i], i);
		
		for(int i=0;i<4;i++)
			for(int j=0;j<4;j++)
				dist[i][j] = INT_MAX;
		
		pair<int, int> f;
		if(!freeZone(f))
			bfs();
		else 
			dfs(start.first, start.second, f, 0);
		
		// for(int i=0;i<4;i++)
		// {
		// 	for(int j=0;j<4;j++)
		// 		cout << dist[i][j]<<" ";
		// 	cout<<"\n";
		// }
		// cout<<"\n";
		
		if(dist[finish.first][finish.second] == INT_MAX)
			printf("Trapped!\n");
		else 
			printf("Escaped in %d minute(s).\n", dist[finish.first][finish.second]);
	}
}		

int main()
{
	solve();
    return 0;
}