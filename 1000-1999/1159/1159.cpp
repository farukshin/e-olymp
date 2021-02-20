//https://www.e-olymp.com/ru/problems/1159
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int gcd (int a, int b, int & x, int & y) {
	if (a == 0) {
		x = 0; y = 1;
		return b;
	}
	int x1, y1;
	int d = gcd (b%a, a, x1, y1);
	x = y1 - (b / a) * x1;
	y = x1;
	return d;
}
 
bool find_any_solution (int a, int b, int c, int & x0, int & y0, int & g) {
	g = gcd (abs(a), abs(b), x0, y0);
	if (c % g != 0)
		return false;
	x0 *= c / g;
	y0 *= c / g;
	if (a < 0)   x0 *= -1;
	if (b < 0)   y0 *= -1;
	return true;
}

void shift_solution (int & x, int & y, int a, int b, int cnt, set<pair<int,int>> & ans) {
	x += cnt * b;
	y -= cnt * a;
	ans.insert({x,y});
}
 
int find_all_solutions (int a, int b, int c, int minx, int maxx, int miny, int maxy, set<pair<int,int>> & ans)
{
	int x, y, g;
	if (! find_any_solution (a, b, c, x, y, g))
		return 0;
	a /= g;  b /= g;
 
	int sign_a = a>0 ? +1 : -1;
	int sign_b = b>0 ? +1 : -1;
 
	shift_solution (x, y, a, b, (minx - x) / b, ans);
	if (x < minx)
		shift_solution (x, y, a, b, sign_b, ans);
	if (x > maxx)
		return 0;
	int lx1 = x;
 
	shift_solution (x, y, a, b, (maxx - x) / b, ans);
	if (x > maxx)
		shift_solution (x, y, a, b, -sign_b, ans);
	int rx1 = x;
 
	shift_solution (x, y, a, b, - (miny - y) / a, ans);
	if (y < miny)
		shift_solution (x, y, a, b, -sign_a, ans);
	if (y > maxy)
		return 0;
	int lx2 = x;
 
	shift_solution (x, y, a, b, - (maxy - y) / a, ans);
	if (y > maxy)
		shift_solution (x, y, a, b, sign_a, ans);
	int rx2 = x;
 
	if (lx2 > rx2)
		swap (lx2, rx2);
	int lx = max (lx1, lx2);
	int rx = min (rx1, rx2);
 
	return (rx - lx) / abs(b) + 1;
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

	int a=12,b=31,c;
	cin>>c;
	
	int x,y,g;
	set<pair<int,int>> ans;
	
	int k = find_all_solutions(a,b,c,1,31,1,12, ans);
	for(auto s:ans)
		printf("%02d/%02d\n", s.first, s.second);

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}