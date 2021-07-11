// https://www.e-olymp.com/ru/problems/7369
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int a, b;
    cin >> a >> b;

    while(a % 7 != 3)
        a++;
    while(b % 7 != 3)
        b--;

    if(b < a)
        cout << 0;
    else if(b == a)
        cout << 1;
    else cout << (b - a) / 7 + 1;


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