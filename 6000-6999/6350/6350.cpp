// https://www.e-olymp.com/ru/problems/6350
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int check(int n)
{
    int ans = 0;
    ld price = 1.2, ret = 0.2;
    ld cur = n;

    while(cur >= price)
    {
        int k = trunc(cur / price);
        ans += k;
        cur = cur - price * k + ret * k;
    }
    return ans;
}

void solve()
{
    int n;
    //cin>>n;
    scanf("%d", &n);
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        int a;
        char s[20];
        //cin>>a>>s;
        scanf("%d %s", &a, &s);
        if(s[0] == 'T' && s[1] == 'L')
        {
            ans++;
            continue;
        }

        int curAns = check(a);
        if(stoi(s) != curAns)
            ans++;
    }
    //cout<<ans;
    printf("%d", ans);
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