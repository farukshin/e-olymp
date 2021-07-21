// https://www.e-olymp.com/ru/problems/3603
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int cnt(int a)
{
    int res = 0;
    while(a)
    {
        if(a & 1) res++;
        a = a >> 1;
    }
    return res;
}

void solve()
{
    int n;
    cin >> n;
    int ans = INT_MAX;
    for(int i = 0; i < 2048; i++)
    {
        int a = i, b = a + n;
        if(a >= 0 && a < 2048 && b >= 0 && b < 2048 && (a & b) == 0)
            ans = min(ans, cnt(a) + cnt(b));
    }

    cout << ans;

}

int main()
{
    //cout.setf(std::ios::fixed); //cout.precision(2);
    solve();
    //int t; cin >> t; while (t--) solve();
    return 0;
}