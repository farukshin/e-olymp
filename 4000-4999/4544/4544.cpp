// https://www.e-olymp.com/ru/problems/4544
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int getCount1(int n)
{
    int ans = 0;
    while(n)
    {
        ans += (n & 1 ? 1 : 0);
        n = n >> 1;
    }
    return ans;
}

void solve()
{
    int n;
    cin >> n;

    int ans, count1 = -1;
    for(int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        int curCount = getCount1(cur);
        if(curCount > count1)
            ans = cur, count1 = curCount;
        else if(curCount == count1)
            ans = min(ans, cur);
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