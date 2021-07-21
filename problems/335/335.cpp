// https://www.e-olymp.com/ru/problems/335
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    bool ans = false;
    for(int i = 1; i <= n; i++)
        if(n % i == 0)
            ans = !ans;
    cout << (ans ? 1 : 0) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    //solve();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}