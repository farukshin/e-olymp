// https://www.e-olymp.com/ru/problems/835
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    vector<int> v(5);
    map<int, int> mp;
    for(int i = 0; i < 5; i++)
        cin >> v[i], mp[v[i]]++;
    sort(v.begin(), v.end());
    bool three = false, pair = false, pair2 = false, fl4 = false;
    for(auto d : mp)
        if(d.second == 3)
            three = true;
        else if(d.second == 4)
            fl4 = true;
        else if(d.second == 2 && !pair)
            pair = true;
        else if(d.second == 2 && pair)
            pair2 = true;

    if(mp.size() == 1)
        cout << "Impossible";
    else if(mp.size() == 2 && fl4)
        cout << "Four of a Kind";
    else if(three && pair)
        cout << "Full House";
    else if(v[0] + 1 == v[1] && v[1] + 1 == v[2] && v[2] + 1 == v[3] && v[3] + 1 == v[4])
        cout << "Straight";
    else if(three)
        cout << "Three of a Kind";
    else if(pair2)
        cout << "Two Pairs";
    else if(pair)
        cout << "One Pair";
    else
        cout << "Nothing";

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