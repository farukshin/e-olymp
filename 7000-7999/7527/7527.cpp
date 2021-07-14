// https://www.e-olymp.com/ru/problems/7527
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    scanf("%d\n", &n);

    for(int i = 0; i < n; i++)
    {
        char name[31];
        int d1, m1, g1, d2, m2, g2, k;
        scanf("%s %d/%d/%d %d/%d/%d %d\n", &name, &g1, &m1, &d1, &g2, &m2, &d2, &k);
        if(g1 >= 2010 || g2 >= 1991)
            printf("%s eligible\n", name);
        else if(k >= 41)
            printf("%s ineligible\n", name);
        else
            printf("%s coach petitions\n", name);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(1);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}