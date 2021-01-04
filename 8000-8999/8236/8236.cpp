//https://www.e-olymp.com/ru/problems/8236
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(1);

    int n;
    cin >> n;
    vector<int> v0, v1;

    for (int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        if (cur % 2 == 0)
            v0.push_back(cur);
        else
            v1.push_back(cur);
    }

    sort(v1.begin(), v1.end());
    sort(v0.begin(), v0.end(), greater<int>());

    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
    for (int i = 0; i < v0.size(); i++)
        cout << v0[i] << " ";

    //cout << sets.size() << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}
