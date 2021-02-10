//https://www.e-olymp.com/ru/problems/4004
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

vector<vector<int>> ss;
vector<char> cl;
vector<int> p;
int cycle_st, cycle_end;

void read_ss(vector<vector<int>>& ss, const int& m, const bool& orient = true) {

    for (int i = 0;i < m;i++)
    {
        int a, b;
        cin >> a >> b;
        --a, --b;
        ss[a].push_back(b);
        if (!orient)
            ss[b].push_back(a);
    }

}

void read_ss_from_ms(vector<vector<int>>& ss, const int& n) {

    for (int i = 0;i < n;i++)
        for (int j = 0;j < n;j++)
        {
            int cur;
            cin >> cur;
            if (cur)
                ss[i].push_back(j);
        }

}

bool dfs(int v) {
    cl[v] = 1;
    for (size_t i = 0; i < ss[v].size(); ++i) {
        int to = ss[v][i];
        if (cl[to] == 0) {
            p[to] = v;
            if (dfs(to))  return true;
        }
        else if (cl[to] == 1) {
            cycle_end = v;
            cycle_st = to;
            //printf("cycle_end=%d cycle_st=%d\n", cycle_end, cycle_st);
            return true;
        }
    }
    cl[v] = 2;
    return false;
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    cin >> n;
    ss.resize(n);

    read_ss_from_ms(ss, n);


    p.assign(n, -1);
    cl.assign(n, 0);
    cycle_st = -1;
    for (int i = 0; i < n; ++i)
        if (dfs(i))
            break;

    if (cycle_st == -1)
        puts("0");
    else {
        puts("1");
        // vector<int> cycle;
        // //cycle.push_back(cycle_st);
        // for (int v = cycle_end; v != cycle_st; v = p[v])
        //     cycle.push_back(v);
        // cycle.push_back(cycle_st);
        // reverse(cycle.begin(), cycle.end());
        // for (size_t i = 0; i < cycle.size(); ++i)
        //     printf("%d ", cycle[i] + 1);
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
    //int t; cin >> t; while(t--) solve();

    return 0;
}