//https://www.e-olymp.com/ru/problems/8917
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    cin >> n;
    int cur = 1;

    for(int i = 1; true; i++)
    {
        cur *= 2;
        if(cur < n)
            cout << cur << " ";
        else
            break;
    }


    //cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}