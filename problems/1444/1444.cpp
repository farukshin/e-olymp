// https://www.e-olymp.com/ru/problems/1444
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

bool success = false;
string strA, strB, strC;
string s;

void parse(string s)
{
    int pl = s.find('+');
    int rv = s.find('=');
    strA = s.substr(0, pl);
    strB = s.substr(pl + 1, rv - pl - 1);
    strC = s.substr(rv + 1);

    strA = string(9 - strA.length(), '0') + strA;
    strB = string(9 - strB.length(), '0') + strB;
    strC = string(9 - strC.length(), '0') + strC;
}

void check(int a, int b, int c)
{
    int pre = 0;
    bool fl = true;
    for(int i = 8; i >= 0 && fl; i--)
    {
        int k1 = (strA[i] == 'A' ? a : (strA[i] == 'B' ? b : (strA[i] == 'C' ? c : 0)));
        int k2 = (strB[i] == 'A' ? a : (strB[i] == 'B' ? b : (strB[i] == 'C' ? c : 0)));
        int k3 = (strC[i] == 'A' ? a : (strC[i] == 'B' ? b : (strC[i] == 'C' ? c : 0)));
        if(k3 != (k1 + k2 + pre) % 10)
            fl = false;
        else
            pre = (k1 + k2 + pre) / 10;
    }

    if(fl)
    {
        success = true;
        for(auto ch : s)
            if(ch == 'A') cout << a;
            else if(ch == 'B') cout << b;
            else if(ch == 'C') cout << c;
            else cout << ch;
    }
}

void solve()
{

    cin >> s;
    parse(s);
    //cout<< strA <<"\n"<< strB<<"\n"<< strC<<"\n";

    for(int a = 0; a < 10 && !success; a++)
        for(int b = 0; b < 10 && !success; b++)
            for(int c = 0; c < 10 && !success; c++)
                if(a != b && a != c && b != c)
                    check(a, b, c);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}