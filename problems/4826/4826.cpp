// https://www.e-olymp.com/ru/problems/4826
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void func(int a, int b)
{
    if(a <= b)
        cout << " " << a, func(a + 1, b);
}

void solve()
{
    int a, b;
    cin >> a >> b;
    cout << a;
    func(a + 1, b);
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