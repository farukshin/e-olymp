// https://www.e-olymp.com/ru/problems/312
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int n;
int k = 100000;
vector<pair<int, int>> v;
vector<int> vv;

int f(vector<int> &p)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if(p[i] == 1) s += v[i].first;
        else if(p[i] == 2) s += v[i].second;
    }
    return s;
}

ld rnd()
{
    return ld(rand()) / RAND_MAX;
}

void load()
{
    int a, b;
    vector<pair<int, int>> p;
    vector<pair<int, int>> v1;
    vector<pair<int, int>> v2;
    int i = 0;
    while(cin >> a >> b)
    {
        p.push_back({a, b});
        v1.push_back({a, i});
        v2.push_back({b, i});
        i++;
    }
    sort(begin(v1), end(v1), greater<pair<int, int>>());
    sort(begin(v2), end(v2), greater<pair<int, int>>());

    set<int> st;

    int mn = p.size();
    vector<bool> used(mn, false);
    for(int i = 0; i < 15; i++)
        used[v1[i].second] = true, st.insert(v1[i].second);
    int cnt = 0;
    for(int i = 0; i < mn && cnt < 15; i++)
        if(!used[v2[i].second])
            used[v2[i].second] = true, cnt++, st.insert(v2[i].second);


    fill(begin(used), end(used), false);
    for(int i = 0; i < 15; i++)
        used[v2[i].second] = true, st.insert(v2[i].second);
    cnt = 0;
    for(int i = 0; i < mn && cnt < 15; i++)
        if(!used[v1[i].second])
            used[v1[i].second] = true, cnt++, st.insert(v1[i].second);

    for(auto d : st)
        v.push_back(p[d]);
    n = v.size();
}

void solve()
{
    load();

    vv.resize(n, 0);
    for(int i = 0; i < 30; i++)
        vv[i] = (i < 15 ? 1 : 2);
    random_shuffle(vv.begin(), vv.end());

    int ans = f(vv);
    ld t = 1.0;

    for(int i = 0; i < k; i++)
    {
        t *= 0.99;
        auto u = vv;
        while(true)
        {
            int a = rand() % n;
            int b = rand() % n;
            if(u[a] != u[b])
            {
                swap(u[a], u[b]);
                break;
            }
        }
        int cur = f(u);
        if(cur > ans || rnd() < exp((cur - ans) / t) )
            vv = u, ans = cur;
    }
    cout << ans;
}

int main()
{
    solve();
    return 0;
}