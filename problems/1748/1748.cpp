// https://www.e-olymp.com/ru/problems/1748
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> ss(n);
    for(int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        --a, --b;
        ss[a].push_back(b);
        ss[b].push_back(a);
    }
    int k;
    cin >> k;

    set<int> ans;
    for(int i = 0; i < n; i++)
        if(ss[i].size() >= k)
            ans.insert(i);

    cout << ans.size() << "\n";
    for(auto d : ans)
        cout << d + 1 << " ";
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