//https://www.e-olymp.com/ru/problems/446
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b = 1, l = 0;
    cin >> a;
    while(b <= a)
    {
        if(a % b == a / b)
        {
            l += 1;
            b += 1;
        }
        else
        {
            b += 1;
        }
    }
    cout << l;
}