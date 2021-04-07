// https://www.e-olymp.com/ru/problems/2817
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void bts(int n)
{
    int i = 0;
    while(n)
    {
        if(n & 1)
            cout << i << " ";
        n = n >> 1;
        i++;
    }
    cout << "\n";
}

void solve()
{
    int n;
    cin >> n;
    bts(n);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    //solve();
    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}