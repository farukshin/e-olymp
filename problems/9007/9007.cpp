//https://www.e-olymp.com/ru/problems/9007
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    ll n;
    cin >> n;

    set<int> sets;
    while (n--)
    {
        int cur;
        cin >> cur;
        sets.insert(abs(cur));
    }
    cout << sets.size() << endl;
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