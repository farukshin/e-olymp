// https://www.e-olymp.com/ru/problems/6254
#include <iostream>
#include <vector>
#include <map>
using namespace std;

map<string, int> mp =
{
    {"**** ** ** ****", 0},
    {"  *  *  *  *  *", 1},
    {"***  *****  ***", 2},
    {"***  ****  ****", 3},
    {"* ** ****  *  *", 4},
    {"****  ***  ****", 5},
    {"****  **** ****", 6},
    {"***  *  *  *  *", 7},
    {"**** ***** ****", 8},
    {"**** ****  ****", 9}
};

void solve()
{
    vector<string> v(5);
    for(auto &d : v) getline(cin, d);

    bool boom = false;
    int pos = 1, n = 0;
    while(true)
    {
        string s = "";
        for(int i = 0; i < 5; i++)
            for(int j = -1; j < 2; j++)
                s += v[i][pos + j];

        if(mp.count(s)) n = n * 10 + mp[s];
        else boom = true;

        pos += 4;
        if(pos > v[0].size() || boom) break;
    }

    cout << (boom || n % 6 ? "BOOM!!" : "BEER!!");
}


int main()
{
    solve();
    return 0;
}