// https://www.e-olymp.com/ru/problems/8661
#include <iostream>
using namespace std;

void solve()
{
    long double a, p, b;
    cin >> a >> p >> b;

    int day = 0;
    while(true)
    {
        day++;
        a *= (100 + p) / 100;
        if(day % 7 == 0)
        {
            if(a <= b)
            {
                cout << day / 7 << " " << a;
                return;
            }
            a -= b;
        }
        if(day > 1000)
        {
            cout << -1;
            break;
        }
    }
}


int main()
{
    cout.setf(std::ios::fixed);
    cout.precision(2);
    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}