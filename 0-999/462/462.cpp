//https://www.e-olymp.com/ru/problems/462
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> k;
    int b[k];
    for(int i = 0; i < k; i++)
    {
        cin >> b[i];
    }
    sort(b, b + k);
    for(int i = 0; i < k; i++)
    {
        a[b[i] - 1]--;
    }
    for(int i = 0; i < n; i++)
    {
        if(a[i] < 0) cout << "yes";
        else cout << "no";
        if(i != n - 1) cout << endl;
    }
}