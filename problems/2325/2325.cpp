// https://www.e-olymp.com/ru/problems/2325
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    vector<int> v(10, 0);
    for(auto ch : s1)
        v[0 + (ch - '0')]++;
    for(auto ch : s2)
        v[0 + (ch - '0')]++;
    for(int i = 9; i >= 0; i--)
        if(v[i])
            cout << string(v[i], '0' + i);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}