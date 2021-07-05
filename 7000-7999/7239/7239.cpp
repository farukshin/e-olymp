// https://www.e-olymp.com/ru/problems/7239
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

ll nod (int a, int b)
{
    return b == 0 ? a : nod (b, a % b);
}

void solve()
{
    int t1, t2;
    cin >> t1 >> t2;
    cout <<  t1 * (t2 / nod (t1, t2));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}