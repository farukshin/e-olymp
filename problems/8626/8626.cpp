//https://www.e-olymp.com/ru/problems/8626
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(1);

    int n;
    cin >> n;

    string s = to_string(n);

    for (int i = 1; i < s.size(); i++)
        if (s[i] == '7' && s[i - 1] == '3')
        {
            cout << "YES" << endl;
            return;
        }
    cout << "NO" << endl;


}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}
