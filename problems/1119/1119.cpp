// https://www.e-olymp.com/ru/problems/1119
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    char ch;
    int n;
    cin >> ch >> n;
    int an = 1 + (n - 1) * 2;
    int sm = (1 + an) * n / 2 + (1 + an / 2) * (n - 1) / 2;
    cout << sm << "\n";
    for(int i = 1; i <= n; i++)
        cout << string(an / 2 - i + 1, ' ') << string(i + i - 1, ch) << (i == n ? "" : "\n");
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