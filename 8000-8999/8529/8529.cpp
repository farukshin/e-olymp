//https://www.e-olymp.com/ru/problems/8529
//https://www.e-olymp.com/ru/problems/8317
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
    string s = to_string(n);
    sort(s.begin(), s.end());

    ll a = 0, b = 0, ans;
    for(int i = 0; i < s.size(); i++)
        a = a * 10 + (s[i] - '0'), b = b * 10 + (s[s.size() - i - 1] - '0');
    ans = (b - a);
    cout << string(s.size() - to_string(ans).size(), '0') << ans << endl;



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