//https://www.e-olymp.com/ru/problems/8669
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;


void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(9);

    int n;
    scanf("%d", &n);
    const double sqrtN = sqrt (n);
    for(int i = 1; i < sqrtN; i++)
        if(n % i == 0)
            printf("%d ", i);
    for(int i = sqrtN; i >= 1; i--)
        if(n % i == 0)
            printf("%d ", n / i);

}

int main()
{
    //ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}