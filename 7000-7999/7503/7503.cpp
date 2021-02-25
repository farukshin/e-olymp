//https://www.e-olymp.com/ru/problems/7503
#include <bits/stdc++.h>
using namespace std;
long long n, a, b, c, d, m, sum = 0, k = 0;
int main()
{
    cin >> n >> m;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        if(a[i] > k) k = a[i];
    }
    sum = (sum + m - 1) / m;
    if(sum < k) sum = k;
    cout << sum;
    return 0;
}