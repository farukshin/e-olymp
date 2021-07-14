// https://www.e-olymp.com/ru/problems/4287
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    for(int k = 0; k < n; k++)
    {
        map<int, int> mp;
        int cur;
        for(int i = 0; i < 12; i++)
            cin >> cur, mp[cur]++;
        bool success = true;
        for(auto d : mp)
            if(d.second % 4 != 0)
                success	= false;
        cout << (success ? "yes" : "no") << "\n";
    }
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