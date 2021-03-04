//https://www.e-olymp.com/ru/problems/111
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1, m1, h2, m2, a = 0;
    cin >> h1 >> m1 >> h2 >> m2;
    while(0 < 1)
    {
        if(m1 == 0)
        {
            if(h1 > 12)
            {
                a = a + h1 - 12;
            }
            else if(h1 == 0)
            {
                a = a + 12;
            }
            else
            {
                a = a + h1;
            }
        }
        if(m1 == 30)
        {
            a++;
        }
        if(h1 == h2 && m1 == m2)
        {
            break;
        }
        m1++;
        if(m1 == 60)
        {
            m1 = 0;
            h1++;
        }
    }
    cout << a;
    return 0;
}