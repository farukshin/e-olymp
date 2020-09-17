//https://www.e-olymp.com/ru/problems/8998
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    //std::cout.setf(std::ios::fixed);
    //std::cout.precision(4);
    string s;
    getline(cin, s);

    map<char, int> mp;
    char min = 'z';

    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
        if (!i)
            min = s[i];
        if (s[i] < min && (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z'))
            min = s[i];
    }

    cout << min << " " << mp[min] << endl;
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
