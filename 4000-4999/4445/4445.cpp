// https://www.e-olymp.com/ru/problems/4445
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

//const int MAXN = 10;
ll ans = 0;

int n;
bool h[100] = {false}, diag_add[100] = {false}, diag_sub[100] = {false};
vector<int> d(100);

void backTraking(int pos)
{
    if(pos == n)
    {
        ans++;
        return;
    }

    for(int i = 0; i < n; i++)
        if(!h[i] && !diag_add[pos + i] && !diag_sub[pos - i + n])
        {
            d[pos] = i;
            h[i] = true;
            diag_add[pos + i] = true;
            diag_sub[pos - i + n] = true;
            backTraking(pos + 1);
            d[pos] = 0;
            h[i] = false;
            diag_add[pos + i] = false;
            diag_sub[pos - i + n] = false;
        }
}

void solve()
{
    cin >> n;
    backTraking(0);
    cout << ans;
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