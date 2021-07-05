// https://www.e-olymp.com/ru/problems/1123
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int s(int n)
{
    int ans = 0;
    while(n)
    {
        ans += n % 10;
        n /= 10;
    }
    return ans;
}

int s2(int n)
{
    int ans = 0;
    while(n)
    {
        ans += (n % 10) * (n % 10);
        n /= 10;
    }
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    if(n % 8 == 0 || s(n) % 8 == 0 || s2(n) % 8 == 0)
        cout << "Lucky number!\n";
    else
        cout << "What a pity!\n";
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