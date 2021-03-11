//https://www.e-olymp.com/ru/problems/575
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    //cout.setf(std::ios::fixed);
    //cout.precision(6);

    int k;
    cin >> k;
    int i = 0, x0 = 2, x1 = 2;
    int ans = 0;
    for(;;)
    {
        i++;


        int t;
        if(i % 3 == 1)
        {
            t = x1;
            x1 -= 1;
            x0 = t;
        }
        else
        {
            t = x1;
            x1 += 1;
            x0 = t;
        }
        //cout<<x1<<" ";
        if(x1 == k)
        {
            cout << i << endl;
            break;
        }

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