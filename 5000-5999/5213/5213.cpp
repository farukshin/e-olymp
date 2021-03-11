//https://www.e-olymp.com/ru/problems/5213
#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long n;
    cin >> n;
    long long arr[n + 1];
    arr[0] = arr[1] = 1;
    cout << arr[1] << ' ';
    for(int i = 2; i < n; i++)
    {
        arr[i] = arr[n % i] * (n - n / i) % n;
        cout << arr[i] << ' ';
    }
    return 0;
}