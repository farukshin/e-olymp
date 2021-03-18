// https://www.e-olymp.com/ru/problems/291
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

ll ans = 0;
//int k=0;
queue<int> q;
set<int> st;
map<int, int> mp;
vector<int> vn;
vector<int> vm;

void parking(int cur)
{
    int pos;
    for(auto p : st)
    {
        pos = p;
        break;
    }
    st.erase(pos);
    mp[cur - 1] = pos;

    ans += vn[pos] * vm[cur - 1];
}

void ext(int cur)
{
    st.insert(mp[abs(cur + 1)]);
    if(!q.empty())
    {
        int w = q.front();
        q.pop();
        parking(w);
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vn.resize(n);
    vm.resize(m);

    for(int i = 0; i < n; i++)
        cin >> vn[i];
    for(int i = 0; i < m; i++)
        cin >> vm[i];

    for(int i = 0; i < n; i++)
        st.insert(i);

    for(int i = 0; i < 2 * m; i++)
    {
        int cur;
        cin >> cur;

        if(st.size() && cur > 0)
            parking(cur);
        else if(cur < 0)
            ext(cur);
        else if(!st.size() && cur > 0)
            q.push(cur);

    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(6);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}