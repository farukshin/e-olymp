// https://www.e-olymp.com/ru/problems/2807
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;

    map<char, int> mp;
    for(int i = 0; i < n; i++)
    {
        char ch;
        cin >> ch;
        mp[ch]++;
    }

    bool success = false;
    for(auto d : mp)
        if(d.second % 2 != 0)
            cout << d.first, success = true;

    if(!success)
        cout << "Ok";
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