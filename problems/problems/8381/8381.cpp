// https://www.e-olymp.com/ru/problems/8381
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

ll countNum(int n)
{
    if(n == 1) return 9;

    ll ans = 1;
    int step = 9;
    for(int i = 1; i <= min(n, 10); i++)
        step -= (i > 2 ? 1 : 0), ans *= step;
    return ans + countNum(n - 1);
}

void solve()
{
    int n;
    cin >> n;
    n = min(n, 10);

    cout << countNum(n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(1);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}