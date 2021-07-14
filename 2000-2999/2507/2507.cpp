//https://www.e-olymp.com/ru/problems/2507
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int n, m;
vector<string> v;
int runx[4] = {0, 1, 0, -1};
int runy[4] = {1, 0, -1, 0};

int getContact(int a, int b)
{
    int ans = 0;
    for(int i = 0; i < 4; i++)
    {
        int aa = a + runx[i];
        int bb = b + runy[i];
        if(aa >= 0 && aa < n && bb >= 0 && bb < m && v[aa][bb] == 'B')
            ans++;
    }
    return ans;
}

void solve()
{
    cin >> m >> n;
    v.resize(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];

    int ans = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(v[i][j] == 'A')
                ans += getContact(i, j);

    cout << ans;
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