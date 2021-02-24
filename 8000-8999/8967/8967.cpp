//https://www.e-olymp.com/ru/problems/8967
#include <iostream>

using namespace std;
int main()
{
    int num, min = 0, max = 0;
    cin >> num;
    int *mass = new int[num];
    for (int i = 1; i <= num; i++)
    {
        cin >> mass[i];
    }
    max = mass[1];
    min = mass[1];
    for (int i = 1; i <= num; i++)
    {
        if (max < mass[i])
        {
            max = mass[i];
        }
        if (min > mass[i])
        {
            min = mass[i];
        }
    }
    for (int i = 1; i <= num; i++)
    {
        cout << mass[i] - max + min << " ";
    }

    return 0;
}