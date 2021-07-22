//https://www.e-olymp.com/ru/problems/7329
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int n, m;
vector<int> v(10000);

int cnt(int len)
{
    int res = 0;
    for(int i = 0; i < n; i++)
        res += v[i] / len;
    return res;
}

void solve()
{
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        cin >> v[i];

    int l = 0, r = INT_MAX;
    while(r - l > 1)
    {
        int mid = (r + l) / 2;
        int newCnt = cnt(mid);
        if(newCnt >= m)
            l = mid;
        else
            r = mid;
    }
    cout << l;
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