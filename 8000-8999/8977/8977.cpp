//https://www.e-olymp.com/ru/problems/8977
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    string s;
    cin >> s;

    string cur = "";
    cout << s[2] << s[6] << s[10] << endl;
    cout << s[0] << s[s.size() - 2] << s[s.size() - 1] << endl;
    cout << s.substr(0, 7) << endl;
    cout << s.substr(4) << endl;

    for(int i = 1; i < s.size(); i++)
        if(i % 2 == 1)
            cur += s[i];
    cout << cur << endl;
    cout << cur.size() << endl;
    cur = s;
    reverse(cur.begin(), cur.end());
    cout << cur << endl;



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