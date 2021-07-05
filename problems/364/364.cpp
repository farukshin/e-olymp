// https://www.e-olymp.com/ru/problems/364
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int fact(int n)
{
    int res = 1;
    for(int i = 2; i <= n; i++)
        res *= i;
    return res;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<char> v(n);
    for(int i = 0; i < n; i++)
        v[i] = 'a' + i;

    int mx = fact(n);
    bool prjam = (k <= mx - k);
    //bool prjam = false;
    int step = (prjam ? k :  mx - k + 2);

    while(--step)
        if(prjam)
            next_permutation(v.begin(), v.end());
        else
            prev_permutation(v.begin(), v.end());
    for(auto ch : v)
        cout << ch;
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