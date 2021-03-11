//https://www.e-olymp.com/ru/problems/7367
#include <iostream>
using namespace std;
double d = 10, m, s;
int t;
int main()
{
    cin >> m;
    if (m <= 10) cout << 1 << endl;
    else
    {
        while (s < m)
        {
            s += d;
            d += d * 0.1;
            t++;
        }
        if (s < m) cout << t + 1 << endl;
        else cout << t << endl;
    }
    return 0;
}