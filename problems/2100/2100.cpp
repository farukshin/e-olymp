//https://www.e-olymp.com/ru/problems/2100
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    //cin>>n;
    scanf("%d", &n);
    int pre;
    //cin>>pre;
    scanf("%d", &pre);
    bool fl = false;
    for(int i = 1; i < n; i++)
    {
        int cur;
        //cin>>cur;
        scanf("%d", &cur);
        if(!fl && pre + 1 == cur)
        {
            fl = true;
            //cout << pre;
            printf("%d", pre);
        }
        else if(!fl && pre + 1 != cur)
            //cout<<pre<<",";
            printf("%d,", pre);
        else if(fl && pre + 1 == cur)
            ;
        else if(fl && pre + 1 != cur)
            //cout<<"-"<<pre<<",";
        {
            printf("-%d,", pre);
            fl = false;
        }
        pre = cur;
    }
    if(fl)
        printf("-");
    printf("%d", pre);
    //cout<<(fl?"-":"")<<pre<<"\n";
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