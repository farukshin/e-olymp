// https://www.e-olymp.com/ru/problems/2585
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    int ans = 0, curAns = 0;

    for(int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        curAns = (curAns + cur > 0 ? curAns + cur : 0);
        ans = max(ans, curAns);
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