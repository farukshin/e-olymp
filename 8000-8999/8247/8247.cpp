// https://www.e-olymp.com/ru/problems/8247
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

vector<ll> v;
vector<ll> t;
int n;

void init (int nn)
{
    n = nn;
    t.assign (n, 0);
}

void inc (int i, ll delta)
{
    for (; i < n; i = (i | (i + 1)))
        t[i] += delta;

    for(int i = 0; i < n; i++)
        cout << t[i] << " ";
    cout << "\n";

}

void init (vector<ll> a)
{
    init ((int) a.size());
    for (unsigned i = 0; i < a.size(); i++)
        inc (i, a[i]);
}

void solve()
{
    cin >> n;
    v.resize(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    init(v);
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