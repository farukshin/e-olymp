//https://www.e-olymp.com/ru/problems/1953
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

bool mySort(pair<int, int> p1, pair<int, int> p2)
{
    if(p1.first > p2.first)
        return true;
    else if(p1.first == p2.first && p1.second < p2.second)
        return true;
    return false;
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n, cur;
    cin >> n;
    vector<pair<int, int>> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> cur;
        v[i] = {cur, i};
    }

    sort(v.begin(), v.end(), mySort);

    for(auto s : v)
        cout << s.second + 1 << " ";
    cout << endl;

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