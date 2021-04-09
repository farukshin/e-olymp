// https://www.e-olymp.com/ru/problems/10217
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    int m, s;
    cin >> m >> s;
    ll pre = m * 60 + s;

    int curM, curS;
    bool success = false;
    while(cin >> curM >> curS)
    {
        ll cur = curM * 60 + curS;
        if(!success && cur - pre > 5)
        {
            pre += 5;
            cout << pre / 60 << " " << pre % 60;
            success = true;
        }
        pre = cur;
    }
    if(!success) cout << 0;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin >> t; while(t--) solve();
    return 0;
}