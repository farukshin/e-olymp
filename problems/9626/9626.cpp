//https://www.e-olymp.com/ru/problems/9626
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    cout << (s1.size() >= s2.size() && s1.substr(0, s2.size()) == s2 ? "true" : "false" ) << endl;
    cout << (s1.size() >= s3.size() && s1.substr(s1.size() - s3.size()) == s3 ? "true" : "false" ) << endl;

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