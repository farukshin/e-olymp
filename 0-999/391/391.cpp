//https://www.e-olymp.com/ru/problems/391
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

map<pair<char, int>, string> mp =
{
    {{'0', 0}, " _ "},
    {{'0', 1}, "| |"},
    {{'0', 2}, "|_|"},
    {{'1', 0}, "   "},
    {{'1', 1}, "  |"},
    {{'1', 2}, "  |"},
    {{'2', 0}, " _ "},
    {{'2', 1}, " _|"},
    {{'2', 2}, "|_ "},
    {{'3', 0}, " _ "},
    {{'3', 1}, " _|"},
    {{'3', 2}, " _|"},
    {{'4', 0}, "   "},
    {{'4', 1}, "|_|"},
    {{'4', 2}, "  |"},
    {{'5', 0}, " _ "},
    {{'5', 1}, "|_ "},
    {{'5', 2}, " _|"},
    {{'6', 0}, " _ "},
    {{'6', 1}, "|_ "},
    {{'6', 2}, "|_|"},
    {{'7', 0}, " _ "},
    {{'7', 1}, "  |"},
    {{'7', 2}, "  |"},
    {{'8', 0}, " _ "},
    {{'8', 1}, "|_|"},
    {{'8', 2}, "|_|"},
    {{'9', 0}, " _ "},
    {{'9', 1}, "|_|"},
    {{'9', 2}, " _|"},
    {{'-', 0}, "   "},
    {{'-', 1}, " _ "},
    {{'-', 2}, "   "}

};

void solve()
{
    string s;
    cin >> s;

    for(int i = 0; i < 3; i++)
    {
        for(auto ch : s)
            cout << mp[ {ch, i}];
        cout << "\n";
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}