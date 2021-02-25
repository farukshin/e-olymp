//https://www.e-olymp.com/ru/problems/8642
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

bool check(int n)
{
    int res = 0;
    int cur = n;
    while(cur)
    {
        res += (cur % 10) * (cur % 10) * (cur % 10) * (cur % 10);
        cur /= 10;
    }
    return res == n;
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int a, b;
    cin >> a >> b;

    for(int i = a; i <= b; i++)
        if(check(i))
            cout << i << " ";

    cout << endl;





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