//https://www.e-olymp.com/ru/problems/2207
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);



    int h, m, n;
    scanf("%d:%d", &h, &m);
    scanf("%d", &n);
    printf("%02d:%02d\n", h, m);
    for(int i = 0; i < n - 1; i++)
    {
        int cur;
        scanf("%d", &cur);
        m += cur;
        if(m >= 60)
            h += m / 60, m %= 60;
        if(h >= 24)
            h %= 24;
        printf("%02d:%02d\n", h, m);
    }

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}