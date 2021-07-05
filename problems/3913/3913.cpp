// https://www.e-olymp.com/ru/problems/3913
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s;
    getline(cin, s);
    istringstream io(s);
    int a;
    vector<int> v;
    map<int, string> mp;
    while(io >> a)
        v.push_back(a);
    getline(cin, s);
    istringstream io2(s);
    string cur;
    int ind = 0;
    while(io2 >> cur)
        mp[ind] = cur, ind++;

    for(auto d : v)
        cout << mp[d] << " ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}