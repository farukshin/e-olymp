// https://www.e-olymp.com/ru/problems/9956
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;


void solve()
{
    int n;
    cin >> n;
    bool success = false;
    int ans = -102;
    for(int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        if(cur % 2 == 0)
            ans = max(ans, cur), success = true;
    }
    if(!success)
        cout << "NO";
    else cout << ans;
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