//https://www.e-olymp.com/ru/problems/1054
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

bool check(ll n, unordered_set<ll> &fail, unordered_set<ll> &tru, unordered_set<ll> &tek)
{
    if(fail.count(n) > 0 || tek.count(n) > 0)
    {
        tek.insert(n);
        for(auto k : tek)
            fail.insert(k);
        tek.clear();
        return false;
    }
    if(tru.count(n) > 0 || n == 1)
    {
        tek.insert(n);
        for(auto k : tek)
            tru.insert(k);
        tek.clear();
        return true;
    }

    tek.insert(n);
    ll res = 0;
    while(n)
    {
        res += (n % 10) * (n % 10);
        n /= 10;
    }
    return check(res, fail, tru, tek);
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    cin >> n;
    unordered_set<ll> fail, tru, tek;
    for(int i = 0; i < n; i++)
    {
        ll cur;
        cin >> cur;
        cout << (check(cur, fail, tru, tek) ? 1 : 0);
    }

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