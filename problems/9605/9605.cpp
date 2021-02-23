//https://www.e-olymp.com/ru/problems/9605
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    vector<int> v;
    int n;
    cin >> n;
    int cur;
    for(int i = 0; i < n; i++)
    {
        cin >> cur;
        v.push_back(cur);
    }
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> cur;
        v.push_back(cur);
    }
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> cur;
        v.push_back(cur);
    }
    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

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