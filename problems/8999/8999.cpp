

//https://www.e-olymp.com/ru/problems/8999
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s;
    cin >> s;

    map<char, int> maps;
    char max = 0;
    // bool succes = true;
    for (int i = 0; i < s.length(); i++)
    {
        maps[s[i]]++;
        if (max < s[i])
            max = s[i];
    }
    cout << max << " " << maps[max] << endl;
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
