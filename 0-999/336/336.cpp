// https://www.e-olymp.com/ru/problems/336
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    while(cin >> n)
    {
        int k;
        cin >> k;
        vector<int> run(k);
        for(int i = 0; i < k; i++)
            cin >> run[i];

        vector<bool> win(n + 1, false);
        for(auto r : run)
            if(r > 0 && n >= r)
                win[r] = true;

        for(int i = 0; i <= n; i++)
            for(auto k : run)
                if(i - k >= 0 && !win[i - k])
                    win[i] = true;

        cout << (win[n] ? 1 : 2);
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