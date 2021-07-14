// https://www.e-olymp.com/ru/problems/1354
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, ans = 0;
    ll cur;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> cur;
        if(!cur) continue;
        cur++;
        while(cur)
            if(cur == 1)
            {
                ans++;
                break;
            }
            else if ((cur & 1) && (cur != 1))
                break;
            else
                cur = cur >> 1;
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(1);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}