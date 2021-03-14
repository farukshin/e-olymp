//https://www.e-olymp.com/ru/problems/2169
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        v[i] = i + 1;

    do
    {
        for(auto d : v)
            cout << d << " ";
        cout << "\n";
    }
    while(next_permutation(v.begin(), v.end()));

}

int main()
{
    //ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}