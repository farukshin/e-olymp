// https://www.e-olymp.com/ru/problems/1403
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const int MAXARR = 10000000;
map<int, int> mp;
int cache[MAXARR];

int f(int n)
{
    if(n < MAXARR)
        return cache[n];
    else if(mp[n] > 0)
        return mp[n];
    mp[n] = (n % 3 == 0 ? f(n / 3) + 5 : f(n - 4) + 2);
    return mp[n];
}

void loadCache()
{
    cache[0] = cache[2] = cache[4] = -MAXARR;
    cache[1] = 0;
    cache[3] = 5;
    cache[5] = 2;
    for (int i = 6; i < MAXARR; i++)
        if (i % 3 == 0)
            cache[i] = min(cache[i / 3] + 5, cache[i - 4] + 2);
        else
            cache[i] = cache[i - 4] + 2;
}

void solve()
{
    int n;
    cin >> n;
    if(n % 2 == 0 || n == 1)
    {
        cout << 0;
        return;
    }
    loadCache();

    int ans = f(n);
    cout << (ans > 0 ?  ans : 0);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}