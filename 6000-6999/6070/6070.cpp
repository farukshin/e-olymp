// https://www.e-olymp.com/ru/problems/6070
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int t;
    cin >> t;
    for(int k = 0; k < t; k++)
    {
        int n;
        cin >> n;
        string s;
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> s;
            if(s == "sheep") ans++;
        }
        cout << "Case " << k + 1 << ": This list contains " << ans << " sheep.\n\n";
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