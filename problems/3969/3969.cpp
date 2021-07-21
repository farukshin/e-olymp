// https://www.e-olymp.com/ru/problems/3969
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

ll w, h, n;

ll getCountDiplom(ll len)
{
    ll ans = ll(len / h) * ll(len / w);
    return ans;
}

void solve()
{
    cin >> w >> h >> n;
    ll l = 1, r = min(w, h) * n;
    while(r - l > 1)
    {
        ll mid = (r + l) / 2;
        ll curN = getCountDiplom(mid);
        //printf("\nmid=%ld curN=%ld ", mid, curN);
        if(curN >= n)
            r = mid;
        else
            l = mid;
        //printf("l=%ld r=%ld", l, r);
    }
    cout << (getCountDiplom(l) >= n ? l : r);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(2);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}