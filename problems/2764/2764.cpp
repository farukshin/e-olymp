// https://www.e-olymp.com/ru/problems/2764
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int n;
const int k = 1000;

int f(vector<int> &p)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        int d = 1;
        for (int j = 0; j < i; j++)
            if (abs(i - j) == abs(p[i] - p[j]))
                d = 0;
        s += d;
    }
    return s;
}

ld rnd()
{
    return ld(rand()) / RAND_MAX;
}

void solve()
{
    cin >> n;
    vector<int> v(n);
    iota(v.begin(), v.end(), 0);
    random_shuffle(v.begin(), v.end());

    int ans = f(v);
    ld t = 1.0;

    for(int i = 0; i < k || ans < n; i++)
    {
        t *= 0.99;
        auto u = v;
        swap(u[rand() % n], u[rand() % n]);
        int cur = f(u);
        if(cur > ans || rnd() < exp((cur - ans) / t) )
            v = u, ans = cur;
    }

    for(auto d : v)
        cout << d + 1 << " ";
}

int main()
{
    //cout.setf(std::ios::fixed); //cout.precision(2);
    solve();
    // int t; cin >> t; while (t--) solve();
    return 0;
}