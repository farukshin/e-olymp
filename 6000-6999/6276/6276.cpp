// https://www.e-olymp.com/ru/problems/6276
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> run(m);
    for(int i = 0; i < m; i++)
        run[i] = i + 1;

    vector<bool> win(n + 1, false);
    for(int i = 1; i <= min(n, m); i++)
        win[i] = true;

    for(int i = 0; i <= n; i++)
        for(auto k : run)
            if(i - k >= 0 && !win[i - k])
                win[i] = true;

    if(!win[n])
    {
        cout << 0;
        return;
    }

    for(auto k : run)
        if(n - k >= 0 && !win[n - k])
        {
            cout << k;
            return;
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