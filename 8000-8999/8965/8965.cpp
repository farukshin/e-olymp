//https://www.e-olymp.com/ru/problems/8965
#include <iostream>

using namespace std;
int a[105];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int mn = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[mn]) mn = i;
    }
    int x = a[mn] / 2;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] - x << " ";
    }
}