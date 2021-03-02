//https://www.e-olymp.com/ru/problems/1788
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void reversePerm(vector<int> &p, vector<int> &rep)
{
    for(int i = 1; i < p.size(); i++)
        rep[p[i]] = i;
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    cin >> n;
    vector<int> p(n + 1), rep(n + 1);
    for(int i = 1; i <= n; i++)
        cin >> p[i];
    reversePerm(p, rep);
    for(int i = 1; i <= n; i++)
        cout << rep[i] << " ";
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}