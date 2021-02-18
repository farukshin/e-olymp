//https://www.e-olymp.com/ru/problems/2162
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(0);

    string s1, s2 = "", s3;
    getline(cin, s1);

    for (auto ch : s1)
        if (ch != ' ')
            s2 += ch;
    s3 = s2;
    reverse(s3.begin(), s3.end());
    cout << (s2 == s3 ? "YES" : "NO") << endl;

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