// https://www.eolymp.com/ru/problems/1941
#include <cstdio>
#include <vector>
using namespace std;
typedef long long ll;

int n, m, start, tic = 0;
const int MAXARR = 1e5 + 2;
int in[MAXARR], out[MAXARR];
bool used[MAXARR] = {false};
vector<int> ss[MAXARR];

template <typename T>
inline void read(T &f)
{
	f = 0;
	T fu = 1;
	char c = getchar();
	while (c < '0' || c > '9')
	{
		if (c == '-')
			fu = -1;
		c = getchar();
	}
	while (c >= '0' && c <= '9')
	{
		f = (f << 3) + (f << 1) + (c & 15);
		c = getchar();
	}
	f *= fu;
}

template <typename T>
void print(T x)
{
	if (x < 0)
		putchar('-'), x = -x;
	if (x < 10)
		putchar(x + 48);
	else
		print(x / 10), putchar(x % 10 + 48);
}

template <typename T>
void print(T x, char t)
{
	print(x);
	putchar(t);
}

void dfs(int node)
{
	used[node] = true;
	in[node] = tic++;
	for (auto chield : ss[node])
		if (!used[chield])
		{
			used[chield] = true;
			dfs(chield);
		}
	out[node] = tic++;
}

bool isPar(int a, int b)
{
	return in[a] < in[b] && out[a] > out[b];
}

void solve()
{
	read(n);
	for (int i = 0; i < n; i++)
	{
		int a;
		read(a);
		a--;
		if (a == -1)
			start = i;
		else
			ss[a].push_back(i);
	}

	dfs(start);

	read(m);
	for (int i = 0; i < m; i++)
	{
		int a, b;
		read(a), read(b);
		print((isPar(--a, --b) ? 1 : 0), '\n');
	}
}

int main()
{
	solve();
	return 0;
}
