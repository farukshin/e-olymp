// https://www.e-olymp.com/ru/problems/5234
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int countNum(int n)
{
    int ans = (n == 0 ? 1 : 0);
    while(n)
    {
        ans++;
        n /= 10;
    }
    return ans;
}

void solve()
{
    int n, a;
    cin >> n >> a;
    int ans = 0;


    while(true)
    {
        int nextPowA = pow(10, countNum(a));

        int countStep = min(n, nextPowA - a);
        ans += countNum(a) * countStep;
        a += countStep;
        n -= countStep;
        //printf("\nnextPowA=%d countStep=%d ans=%d a=%d n=%d", nextPowA, countStep, ans, a, n);
        if(n <= 0)
            break;
    }
    cout << ans;
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