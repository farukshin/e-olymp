// https://www.e-olymp.com/ru/problems/3607
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;

    //while(cin>>n)
    while(scanf("%d", &n) != EOF )
    {
        vector<int> v(n);
        for(int i = 0; i < n; i++)
            //cin>>v[i];
            scanf("%d", &v[i]);

        int a, b;
        //cin>>a>>b;
        scanf("%d %d", &a, &b);
        int ans = 0;
        for(int i = 0; i < n; i++)
            if(v[i] >= a && v[i] <= b)
                ans++;
        //cout<< ans << endl;
        printf("%d\n", ans);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(6);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}