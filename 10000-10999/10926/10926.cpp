// https://www.eolymp.com/ru/problems/10926
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct p
{
    int a, b, c;
    p(int _a, int _b, int _c)
    {
        a = _a;
        b = _b;
        c = _c;
    }
};

void solve()
{
    int n;
    cin >> n;

    map<int, vector<int>> ver, gor;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        gor[a].push_back(i);
        ver[b].push_back(i);
    }

    set<tuple<int, int, int>> st;
    for (auto d : ver)
        for (int a = 0; a < d.second.size(); a++)
            for (int b = a + 1; b < d.second.size(); b++)
                for (int c = b + 1; c < d.second.size(); c++)
                    st.insert(make_tuple(d.second[a], d.second[b], d.second[c]));

    for (auto d : gor)
        for (int a = 0; a < d.second.size(); a++)
            for (int b = a + 1; b < d.second.size(); b++)
                for (int c = b + 1; c < d.second.size(); c++)
                    st.insert(make_tuple(d.second[a], d.second[b], d.second[c]));

    cout << st.size();
}

int main()
{
    solve();
    return 0;
}
