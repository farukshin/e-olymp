// https://www.e-olymp.com/ru/problems/8377
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int func(int n)
{
    int ans = 1;
    while(n)
    {
        ans *= n % 10;
        n /= 10;
    }
    return ans;
}

int stoik(int n, int k)
{
    if(n < 10)
        return k;
    else
        return stoik(func(n), k + 1);
}

void solve()
{
    int n;
    while(cin >> n)
        cout << stoik(n, 0) << "\n";
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