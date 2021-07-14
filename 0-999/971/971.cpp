//https://www.e-olymp.com/ru/problems/971
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int joseph (int n, int k)
{
    return n > 1 ? (joseph (n - 1, k) + k - 1) % n + 1 : 1;
}

void solve()
{
    int n, k;
    cin >> n >> k;

    cout << joseph(n, k);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(2);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}