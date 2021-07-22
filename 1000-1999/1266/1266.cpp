// https://www.e-olymp.com/ru/problems/1266
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int n, k;
int ans;

void backtracking(int pos, int sum, vector<int> &v)
{
    if(ans == n || sum > n)
        return;

    if(pos == v.size())
    {
        if(sum > ans && sum <= n)
            ans = sum;
        return;
    }

    backtracking(pos + 1, sum + v[pos], v);
    backtracking(pos + 1, sum, v);
}

void solve()
{
    while(cin >> n)
    {
        cin >> k;
        vector<int> v(k);
        for(int i = 0; i < k; i++)
            cin >> v[i];

        ans = 0;
        backtracking(0, 0, v);
        cout << "sum:" << ans << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(3);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}