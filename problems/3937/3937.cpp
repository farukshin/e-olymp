// https://www.e-olymp.com/ru/problems/3937
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int digitalRoot(int n)
{
    if( n < 10)
        return n;
    int ans = 0;
    while(n)
    {
        ans += n % 10;
        n /= 10;
    }
    return digitalRoot(ans);
}

bool mysort(int p1, int p2)
{
    int d1 = digitalRoot(p1);
    int d2 = digitalRoot(p2);
    if(d1 != d2)
        return d1 < d2;
    else return p1 < p2;
}

void solve()
{
    int n;
    vector<int> v;
    while(cin >> n)
        v.push_back(n);
    sort(v.begin(), v.end(), mysort);
    for(auto d : v)
        cout << d << " ";
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