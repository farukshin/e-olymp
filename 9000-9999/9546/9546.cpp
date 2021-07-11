// https://www.e-olymp.com/ru/problems/9546
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    map<char, int> mp =
    {
        {'A', 2},
        {'B', 22},
        {'C', 222},
        {'D', 3},
        {'E', 33},
        {'F', 333},
        {'G', 4},
        {'H', 44},
        {'I', 444},
        {'J', 5},
        {'K', 55},
        {'L', 555},
        {'M', 6},
        {'N', 66},
        {'O', 666},
        {'P', 7},
        {'Q', 77},
        {'R', 777},
        {'S', 7777},

        {'T', 8},
        {'U', 88},
        {'V', 888},

        {'W', 9},
        {'X', 99},
        {'Y', 999},
        {'Z', 9999},
        {' ', 0}
    };
    string s;
    getline(cin, s);
    for(auto ch : s)
        cout << mp[ch] << " ";
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