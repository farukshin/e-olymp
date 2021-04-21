#include <iostream>
using namespace std;
int main()
{
    long a, t, pow = 1;
    cin >> a;
    t = a;
    while(t)
    {
        t /= 2;
        pow *= 2;
    }
    t = a;
    long max = a;
    do
    {
        a = a << 1;
        a = a % pow + (a >= pow ? 1 : 0);
        if (max < a) max = a;
    }
    while (t != a );
    cout << max;
}