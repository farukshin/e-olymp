//https://www.e-olymp.com/ru/problems/395
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    cin >> n;

    vector<int> v(n), a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        a[i] = v[i];
    }

    sort(v.begin(), v.end());
    unordered_set<int> q;
    q.insert(v[0]);

    for(int i = 1; i < n; i++)
    {
        bool fl = true;
        for(int j = 0; j < i && fl; j++)
            if(v[i] % v[j] == 0)
                fl = false;
        if(fl)
            q.insert(v[i]);
    }
    for(int i = 0; i < n; i++)
        if(q.count(a[i]) > 0)
            cout << a[i] << " ";
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}