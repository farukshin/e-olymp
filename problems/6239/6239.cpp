// https://www.e-olymp.com/ru/problems/6239
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s;
    vector<string> v = {"Re", "Pt", "Cc", "Ea", "Tb", "Cm", "Ex"};
    unordered_map<string, int> mp;
    int k = 0;
    while(cin >> s)
        mp[s]++, k++;
    for(auto d : v)
        cout << d << " " << mp[d] << " " << 1.0 * mp[d] / k << "\n";
    cout << "Total " << k << " " << 1.00;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(2);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}