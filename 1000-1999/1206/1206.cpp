//https://www.e-olymp.com/ru/problems/1206
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int f91(int n)
{
    if(n <= 100)
        return f91(f91(n + 11));
    else if(n >= 101)
        return n - 10;
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    cin >> n;


    cout << f91(n) << endl;

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