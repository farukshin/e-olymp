// https://www.e-olymp.com/ru/problems/3968
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

ld func(ld num)
{
    ld res = num * num + sqrt(num);
    return res;
}

void solve()
{
    ld n;
    cin >> n;
    ld EPS = 0.0000001;

    ld l = 0.0, r = 100000.0;
    while((r - l) > EPS)
    {
        ld mid = (r + l) / 2;
        if(func(mid) >= n)
            r = mid;
        else l = mid;
    }

    cout << r;
}


int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(9);

    solve();
    //int t; cin >> t; while(t--) solve();
    return 0;
}