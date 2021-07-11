// https://www.e-olymp.com/ru/problems/6974
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    int r1[6] = {1, 2, 3, 3, 4, 10};
    int r2[7] = {1, 2, 2, 2, 3, 5, 10};

    for(int i = 0; i < n; i++)
    {
        int cur, s1 = 0, s2 = 0;
        for(int k = 0; k < 6; k++)
            cin >> cur, s1 += cur * r1[k];
        for(int k = 0; k < 7; k++)
            cin >> cur, s2 += cur * r2[k];

        if(s1 == s2)
            cout << "Battle " << i + 1 << ": No victor on this battle field\n";
        else if(s1 > s2)
            cout << "Battle " << i + 1 << ": Good triumphs over Evil\n";
        else
            cout << "Battle " << i + 1 << ": Evil eradicates all trace of Good\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}