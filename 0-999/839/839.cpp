//https://www.e-olymp.com/ru/problems/839
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const double EPS = 1E-9;

struct pt
{
    double x, y;

    bool operator< (const pt & p) const
    {
        return x < p.x - EPS || abs(x - p.x) < EPS && y < p.y - EPS;
    }
};

struct line
{
    double a, b, c;

    line() {}
    line (pt p, pt q)
    {
        a = p.y - q.y;
        b = q.x - p.x;
        c = - a * p.x - b * p.y;
        norm();
    }

    void norm()
    {
        double z = sqrt (a * a + b * b);
        if (abs(z) > EPS)
            a /= z,  b /= z,  c /= z;
    }

    double dist (pt p) const
    {
        return a * p.x + b * p.y + c;
    }
};

#define det(a,b,c,d)  (a*d-b*c)

inline bool betw (double l, double r, double x)
{
    return min(l, r) <= x + EPS && x <= max(l, r) + EPS;
}

inline bool intersect_1d (double a, double b, double c, double d)
{
    if (a > b)  swap (a, b);
    if (c > d)  swap (c, d);
    return max (a, c) <= min (b, d) + EPS;
}

bool intersect (pt a, pt b, pt c, pt d, pt & left, pt & right)
{
    if (! intersect_1d (a.x, b.x, c.x, d.x) || ! intersect_1d (a.y, b.y, c.y, d.y))
        return false;
    line m (a, b);
    line n (c, d);
    double zn = det (m.a, m.b, n.a, n.b);
    if (abs (zn) < EPS)
    {
        if (abs (m.dist (c)) > EPS || abs (n.dist (a)) > EPS)
            return false;
        if (b < a)  swap (a, b);
        if (d < c)  swap (c, d);
        left = max (a, c);
        right = min (b, d);
        return true;
    }
    else
    {
        left.x = right.x = - det (m.c, m.b, n.c, n.b) / zn;
        left.y = right.y = - det (m.a, m.c, n.a, n.c) / zn;
        return betw (a.x, b.x, left.x)
               && betw (a.y, b.y, left.y)
               && betw (c.x, d.x, left.x)
               && betw (c.y, d.y, left.y);
    }
}

void solve()
{
    //cout.setf(std::ios::fixed);
    //cout.precision(2);

    pt a, b;
    vector<pair<pt, pt>> v;
    while(cin >> a.x >> a.y >> b.x >> b.y)
        v.push_back({a, b});

    //sort(v.begin(), v.end());
    bool success = false;
    pt l, r;
    for(int i = 0; i < v.size() && !success; i++)
        for(int j = i + 1; j < v.size() && !success; j++)
            if(intersect(v[i].first, v[i].second, v[j].first, v[j].second, l, r))
                cout << "Yes" << endl;
            else
                cout << "No" << endl;


}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t;cin >> t;while (t--)solve();

    return 0;
}