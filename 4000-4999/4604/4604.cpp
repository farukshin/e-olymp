// https://www.e-olymp.com/ru/problems/4604
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

vector<int> parent;
vector<int> rang;

ld d(int x, int y)
{
    ld res = sqrt(x * x + y * y);
    return res;
}

void solve()
{
    int x, y, shag;
    cin >> x >> y >> shag;

    int ans = 0;
    ld r = d(x, y);
    if(floor(r) == r)
    {
        if(int(r) < shag)
            ans = 2;
        else if(int(r) >= shag && int(r) % shag == 0)
            ans = int(r) / shag;
        else  ans = int(r) / shag + 2;
    }
    else if(r > ld(shag))
        ans = int(floor(r / shag)) + 1;
    else
        ans = 2;

    cout << ans;
}

int main()
{
    solve();
    return 0;
}