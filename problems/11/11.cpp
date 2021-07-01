// https://www.e-olymp.com/ru/problems/11
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int m, n, k;
    cin >> m >> n >> k;
    int curk = 0;
    int curm = (m % n) * 10;
    cout << m / n;
    if(k > 0)
        cout << ".";
    while(curk < k)
    {
        if(curm == 0)
        {
            cout << '0', curk++;
        }
        else if(curm < n)
        {
            cout << '0', curm *= 10, curk++;
        }
        else if(curm >= n)
        {
            cout << curm / n, curm %= n, curm *= 10, curk++;
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(2);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}