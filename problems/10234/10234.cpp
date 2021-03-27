// https://www.e-olymp.com/ru/problems/10234
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, m, k;
    cin >> n >> m;
    set<int> covid;

    for(int i = 0; i < m; i++)
    {
        int cur;
        cin >> cur;
        --cur;
        covid.insert(cur);
    }

    vector<vector<pair<int, int>>> ss(n);
    cin >> k;
    for(int i = 0; i < k; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        --a, --b;
        ss[a].push_back({b, c});
        ss[b].push_back({a, c});
    }

    set<int> contact;
    set<int> test;

    for(auto cov : covid)
        for(auto check : ss[cov])
        {
            int id = check.first;
            int len = check.second;
            if(!covid.count(id) && len >= 5)
                contact.insert(id);
        }

    for(auto con : contact)
        for(auto check : ss[con])
        {
            int id = check.first;
            int len = check.second;
            if(!covid.count(id) && !contact.count(id) && len >= 5)
                test.insert(id);
        }


    for(auto d : contact)
        cout << d + 1 << " ";
    cout << "\n";
    for(auto d : test)
        cout << d + 1 << " ";

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    solve();
    return 0;
}