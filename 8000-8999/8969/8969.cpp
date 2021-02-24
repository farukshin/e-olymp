//https://www.e-olymp.com/ru/problems/8969
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n, i, j, b = 0;
    cin >> n;
    int a[n];
    for(i = 1; i <= n; i++)
    {
        cin >> a[i];

    }
    for(j = 1; j <= n; j++)
    {
        b = 0;
        for(i = 1; i <= n; i++)
        {
            if(i < j)
            {
                b = a[i] + b;
            }
        }

        a[j] = a[j] - b;
        cout << a[j] << " ";
    }

    return 0;
}