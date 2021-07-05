// https://www.e-olymp.com/ru/problems/3914
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int l, m, n;
    cin >> l >> m >> n;
    bool success = false;
    for(int i = 1; i <= n; i++)
    {
        int cur;
        cin >> cur;
        if(success) continue;
        int curL = cur * m;
        if(curL > l)
        {
            cout << i - 1;
            success = true;
        }
        else
            l -= curL;
    }
    if(!success)
        cout << n;

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