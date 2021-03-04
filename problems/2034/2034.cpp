//https://www.e-olymp.com/ru/problems/2034
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    //cout.setf(std::ios::fixed);
    //cout.precision(6);

    string x;
    string y = "`1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./";
    while(getline(cin, x))
    {
        size_t found;
        for (int i = 0; i < x.length(); i++)
        {
            if (x[i] == ' ')
            {
                cout << " ";
            }
            else
            {
                found = y.find_first_of(x[i]);
                cout << y[found - 1];
            }
        }
        cout << endl;
    }


}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //string cur; int t; cin >> t; getline(cin,cur); while (t--) solve();

    return 0;
}