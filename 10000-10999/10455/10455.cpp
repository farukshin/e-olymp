// https://www.e-olymp.com/ru/problems/10455
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, q;
    scanf("%d %d", &n, &q);
    set<int> ans;
    ans.insert(0);
    set<int> del;
    del.insert(-1);
    del.insert(n);

    for(int i = 0; i < q; i++)
    {
        int t, a;
        scanf("%d", &t);
        if(t == 2)
        {
            printf("%d\n", ans.size());
            continue;
        }
        if(t != 1) continue;

        scanf("%d", &a);
        --a;
        if(del.count(a)) continue;
        else del.insert(a);

        bool delL = del.count(a - 1);
        bool delR = del.count(a + 1);

        if(!delL && !delR) ans.insert(a + 1); // +1
        else if(delL && delR) ans.erase(a); // -1
        else if(delL && !delR) ans.erase(a), ans.insert(a + 1); // смещение

    }
}


int main()
{
    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}