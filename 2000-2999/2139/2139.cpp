//https://www.e-olymp.com/ru/problems/2139
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

struct pt
{
    int x, y;
};

inline int area (pt a, pt b, pt c)
{
    return (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);
}

inline bool intersect_1 (int a, int b, int c, int d)
{
    if (a > b)  swap (a, b);
    if (c > d)  swap (c, d);
    return max(a, c) <= min(b, d);
}

bool intersect (pt a, pt b, pt c, pt d)
{
    return intersect_1 (a.x, b.x, c.x, d.x)
           && intersect_1 (a.y, b.y, c.y, d.y)
           && area(a, b, c) * area(a, b, d) <= 0
           && area(c, d, a) * area(c, d, b) <= 0;
}

void solve()
{
    //cout.setf(std::ios::fixed);
    //cout.precision(2);

    pt a, b;
    vector<pair<pt, pt>> v;
    while(cin >> a.x >> a.y >> b.x >> b.y)
        v.push_back({a, b});

    bool success = false;
    for(int i = 0; i < v.size() && !success; i++)
        for(int j = i + 1; j < v.size() && !success; j++)
            if(intersect(v[i].first, v[i].second, v[j].first, v[j].second))
                success = true;
    //else cout<<"no"<<endl;

    //cout<<(success ? "intersect": "NOT intersect") <<endl;
    cout << (success ? "YES" : "NO") << endl;
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