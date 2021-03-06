//https://www.e-olymp.com/ru/problems/1498
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void zFunction(string s, vector<int>& z)
{
    int n = (int)s.length();
    z.resize(n, 0);
    for (int i = 1, l = 0, r = 0; i < n; ++i)
    {
        if (i <= r)
            z[i] = min(r - i + 1, z[i - l]);
        while (i + z[i] < n && s[z[i]] == s[i + z[i]])
            ++z[i];
        if (i + z[i] - 1 > r)
            l = i, r = i + z[i] - 1;
    }
}

void solve()
{
    string text, word;
    cin >> text >> word;

    vector<int> z;
    zFunction(word + "$" + text, z);

    for (int i = 0; i <= (int)text.length() - 1; i++)
        if (z[i + (int)word.length() + 1] == (int)word.length())
            cout << i << " ";

    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("a-input-1.txt", "r", stdin);
    //freopen("a-output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}
