//https://www.e-olymp.com/ru/problems/8238
//#include <bits/stdc++.h>
#include <stdio.h>
#include <string>

using namespace std;

typedef long long ll;
typedef long double ld;

void fast_scanf(int &number)
{
    auto ch = getchar_unlocked();
    number = 0;
    while (ch >= '0' && ch <= '9')
    {
        number = number * 10 + ch - '0';
        ch     = getchar_unlocked();
    }
}

void solve()
{
    //cout.setf(std::ios::fixed);
    //cout.precision(4);
    int n;
    fast_scanf(n);

    int a[2 * n], b[n];
    for(int i = 0; i < n; i++)
        fast_scanf(a[i]);

    for(int i = 0; i < n; i++)
        fast_scanf(b[i]);


    int i = n - 1;
    int j = n - 1;
    int end = 2 * n - 1;

    while(j >= 0)
    {
        if(i >= 0 && a[i] > b[j])
            a[end] = a[i], i--;
        else
            a[end] = b[j], j--;
        end--;
    }

    for(int i = 0; i < 2 * n; i++)
        //putchar(a[i]);
        printf("%d ", a[i]);

}

int main()
{
    //ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

//#ifdef _DEBUG
    //  freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
//#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}