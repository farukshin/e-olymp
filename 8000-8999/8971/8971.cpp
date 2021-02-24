//https://www.e-olymp.com/ru/problems/8971
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
    set<int> st;
    vector<int> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(st.count(v[i]) == 0)
        {
            cout << v[i] << " ";
            st.insert(v[i]);
        }
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