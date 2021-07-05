//https://www.e-olymp.com/ru/problems/419
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;


int dist(int n)
{
    int ans = 1;
    while (n != 1)
    {
        if (n % 2 == 1)
            n = n * 3 + 1;
        else
            n /= 2;
        ans++;
    }
    return ans;
}

void solve()
{
    int i, j;
    while(cin >> i >> j)
    {
        int ans = 0;
        for (int a = min(i, j); a <= max(i, j); a++)
            ans = max(ans, dist(a));
        cout << i << " " << j << " " << ans << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(3);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}