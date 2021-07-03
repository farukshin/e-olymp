//https://www.e-olymp.com/ru/problems/5880
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int mex(vector<int> a)
{
    set<int> b(a.begin(), a.end());
    for (int i = 0; ; ++i)
        if (!b.count(i))
            return i;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    cout << mex(v);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}