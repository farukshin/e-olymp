// https://www.e-olymp.com/ru/problems/9020
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

vector<int> v;
int n, k;

int getCnt(ll m)
{
    ll curSum = v[0];
    int res = 1;
    for(int i = 1; i < n; i++)
    {
        if (v[i] > m)
            return INT_MAX;
        else if(curSum + v[i] <= m)
            curSum += v[i];
        else res++, curSum = v[i];
    }
    return res;
}

void solve()
{
    cin >> n >> k;
    v.resize(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];

    ll l = 0, r = LLONG_MAX;
    while(r - l > 1)
    {
        ll mid = (r + l) / 2;
        int newK = getCnt(mid);
        //cout<<"l="<<l<<" r="<<r<<" mid="<<mid<<" newK="<<newK<<"\n";
        if(newK > k)
            l = mid;
        else
            r = mid;
    }
    cout << r;
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