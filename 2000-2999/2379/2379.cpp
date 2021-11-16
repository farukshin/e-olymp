// https://www.e-olymp.com/ru/problems/2379
#include <bits/stdc++.h>
//#include <cstdio>
using namespace std;
typedef long long ll;

struct Mergesort
{
    int n;
    vector<ll> v;
    ll inversionCnt = 0;
    Mergesort(int _n)
    {
        n = _n;
        v.resize(n);
    }

    void merge(int l, int mid, int r)
    {
        int i = l, j = mid + 1;
        while (i <= mid && j <= r)
        {
            if (v[i] <= v[j])
            {
                i++;
            }
            else
            {
                j++;
                inversionCnt += mid - i + 1;
            }
        }
        sort(v.begin() + l, v.begin() + r + 1);
    }

    void mergesort(int l, int r)
    {
        if (l < r)
        {
            int mid = (r + l) / 2;
            mergesort(l, mid);
            mergesort(mid + 1, r);
            merge(l, mid, r);
        }
    }
};

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        a[i] = {x, y};
        b[i] = {y, x};
    }
    Mergesort mg(n);
    sort(begin(a), end(a));
    sort(begin(b), end(b));
    for (int i = 0; i < n; i++)
        mg.v[i] = a[i].second;
    mg.mergesort(0, n - 1);
    ll ans = mg.inversionCnt;
    for (int i = 0; i < n; i++)
        mg.v[i] = a[i].second;
    mg.mergesort(0, n - 1);
    ans = min(ans, mg.inversionCnt);
    cout << ans;
}

int main()
{
    solve();
    return 0;
}
