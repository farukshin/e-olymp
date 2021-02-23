//https://www.e-olymp.com/ru/problems/8974
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
    map<int, int> mp;
    vector<int> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }

    stack<int> st;
    for(int i = n - 1; i >= 0; i--)
        if(mp[v[i]] > 1)
            mp[v[i]] = 0, st.push(v[i]);

    if(st.empty())
    {
        cout << "NO" << endl;
        return;
    }

    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
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