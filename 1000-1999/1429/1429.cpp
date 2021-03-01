//https://www.e-olymp.com/ru/problems/1429
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    //cout.setf(std::ios::fixed);
    //cout.precision(6);

    int n;
    string s1, s2;
    cin >> n >> s1 >> s2;

    if(s1.size() != s2.size())
    {
        cout << (s1.size() > s2.size() ? s1 : s2) << endl;
        return;
    }

    for(int i = 0; i < s1.size(); i++)
        if(s1[i] != s2[i])
        {
            cout << (s1[i] > s2[i] ? s1 : s2) << endl;
            return;
        }

    cout << s1 << endl;

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