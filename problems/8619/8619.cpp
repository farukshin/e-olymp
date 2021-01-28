//https://www.e-olymp.com/ru/problems/8619
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(3);

    int n;
    cin >> n;
    string s = to_string(n);
    bool success = true;
    for (int i = 1; i < s.size(); i++)
        if (s[i] >= '0' && s[i] <= '9' && s[i - 1] >= '0' && s[i - 1] <= '9' && (s[i] - '0') <= (s[i - 1] - '0'))
            success = false;
    cout << (success ? "YES" : "NO") << endl;
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
