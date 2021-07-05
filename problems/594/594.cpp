// https://www.e-olymp.com/ru/problems/594
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int ks = 0;
int all = 0;

void check(string s)
{
    int curS = 0;
    bool isWord = false;
    for(auto ch : s)
        if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
            isWord = true, all++;
        else if(isWord)
            isWord = false, ks++;
    ks += (isWord ? 1 : 0);
}

void solve()
{
    string s;
    while(cin >> s)
        check(s);

    cout << (ks == 0 ? 0 : 1.0 * all / ks);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}