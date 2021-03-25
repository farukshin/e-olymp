// https://www.e-olymp.com/ru/problems/10227
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, ans = -1;
    //cin>>n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        int cur;
        scanf("%d", &cur);
        //cin>>cur;
        if(cur > ans)
            ans = cur;
    }
    printf("%d", ans);
    //cout<<ans;

}

int main()
{
    //ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    // cout.setf(std::ios::fixed); cout.precision(2);

    solve();
    return 0;
}