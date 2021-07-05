// https://www.e-olymp.com/ru/problems/2762
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    int k = 0;
    for(int i = 0; i < n; i++)
    {
        char ch = s[i];
        if(ch >= 'A' && ch <= 'Z')
            k = k << 1;
        else if(ch >= '0' && ch <= '9')
            k = (k << 1) + 1;

        if(i % 5 == 4)
            cout << char('A' + k), k = 0;
    }

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