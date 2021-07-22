// https://www.e-olymp.com/ru/problems/4777
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

struct pt
{
    int x{0}, y{0};
    pt() {}
    pt (int _x, int _y)
    {
        x = _x;
        y = _y;
    }
    pt (pt& p1, pt& p2)
    {
        auto pp = pt(p2.x - p1.x, p2.y - p1.y);
        x = pp.x;
        y = pp.y;
    }

    void load()
    {
        cin >> this->x >> this->y;
    }
};

ld len(pt a)
{
    return sqrt(a.x * a.x + a.y * a.y);
}

pt operator+(pt& a, pt& b)
{
    return pt(a.x + b.x, a.y + b.y);
}
pt operator-(pt& a, pt& b)
{
    return pt(a.x - b.x, a.y - b.y);
}
int operator*(pt& a, pt& b)
{
    return a.x * b.x + a.y * b.y;
}
int operator%(pt& a, pt& b)
{
    return a.x * b.y - b.x * a.y;
}

istream& operator>>(istream &in, pt &p)
{
    in >> p.x >> p.y;
    return in;
}

ostream& operator<<(ostream &out, pt &p)
{
    out << p.x << " " << p.y << endl;
    return out;
}

void solve()
{
    pt a, b, c, d;
    a.load();
    b.load();
    c.load();
    d.load();
    pt p1 = pt(a, b);
    pt p2 = pt(c, d);
    pt sm = p1 + p2;

    cout << len(p1) << " " << len(p2) << "\n" << sm.x << " " << sm.y << "\n" << p1*p2 << " " << p1 % p2 << "\n" << 1.0 * abs(p1 % p2) / 2;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(9);
    solve();
    return 0;
}