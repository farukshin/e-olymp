// https://www.e-olymp.com/ru/problems/9957
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(ans > v[i] && v[i] < 0)
            ans = v[i];

    }
    if(ans == 0) cout << "NO";
    else cout << ans;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}