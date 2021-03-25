// https://www.e-olymp.com/ru/problems/10229
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    scanf("%d", &n);
    cout << n / (60 * 24) + 1 << " ";
    n %= (60 * 24);
    cout << n / 60 << " ";
    n %= 60;
    cout << n;

}

int main()
{
    //ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    // cout.setf(std::ios::fixed); cout.precision(2);

    solve();
    return 0;
}