// https://www.e-olymp.com/ru/problems/8380
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

ll n, allNum;

ll cntNumForPos(int pos, int maxPos)
{
    if(pos == maxPos)
        return allNum;

    ll res = stol(string(pos, '9')) / 10 - stol(string(pos - 1, '9')) / 10;
    return res;
}

void solve()
{
    cin >> n;
    allNum = n / 10;
    if(n == 1)
    {
        cout << 1;
        return;
    }

    int countNum = to_string(n).size();

    ll ans = 0;
    for(int i = 2; i <= countNum; i++)
    {
        ll cnt =  cntNumForPos(i, countNum);
        allNum -= cnt;
        ans += cnt * i;
    }
    ans += (n % 10 != 0 ? countNum + 1 : 1);


    cout << ans;
}

int main()
{
    //cout.setf(std::ios::fixed); cout.precision(6);

    solve();
    //int t; cin >> t; while (t--) solve();
    return 0;
}