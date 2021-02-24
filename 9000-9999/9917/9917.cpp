//https://www.e-olymp.com/ru/problems/9917
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    //cin>>n;
    //n=2;
    string s;
    cin >> s;

    for(int k = 1; k <= 3; k++)
    {
        for(int i = 0; i < k; i++)
            cout << s << " ";
        cout << endl;
    }

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