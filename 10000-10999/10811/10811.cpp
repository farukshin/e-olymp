// https://www.e-olymp.com/ru/problems/10811
#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

struct Dsu {
	int n;
	vector<int> leader, rang, sz;

	Dsu(int _n): leader(_n), rang(_n), sz(_n, 1) {
		iota(begin(leader), end(leader), 0);
	}

	int get(int v) {
		return v == leader[v] ? v : leader[v] = get(leader[v]);
	}

	int size(int v) {
		return sz[get(v)];
	}

	bool merge(int u, int v) {
		u = get(u), v = get(v);
		if (u == v) {
			return false;
		}
		if (rang[u] < rang[v]) {
			swap(u, v);
		}
		leader[v] = u;
		sz[u]+=sz[v];
		if (rang[u] == rang[v]) {
			++rang[u];
		}
		return true;
	}
};

void solve()
{
	int n,m;
	cin>>n>>m;
	Dsu dsu(n);
	string s;
	int a,b;
	for(int i=0;i<m;i++)
	{
		cin>>s>>a>>b;
		--a, --b;
		if(s=="union")
			auto fl = dsu.merge(a,b);
		else 
			cout<< (dsu.get(a)==dsu.get(b)?"YES":"NO")<<"\n";
	}
}		

int main()
{
	solve();
    return 0;
}