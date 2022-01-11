// https://www.eolymp.com/ru/problems/10993
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> par(n, 0);
    for (int i = 1; i < n; i++)
    {
        cin >> par[i];
        par[i]--;
    }
    int cur = n - 1;
    vector<int> ans;
    while (true)
    {
        ans.push_back(cur + 1);
        if (cur == 0)
            break;
        cur = par[cur];
    }
    reverse(begin(ans), end(ans));
    for (auto d : ans)
        cout << d << " ";
}

int main()
{
    solve();
    return 0;
}
