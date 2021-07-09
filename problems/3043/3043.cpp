// https://www.e-olymp.com/ru/problems/3043
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int count;
        cin >> count;
        int mn = 105, mx = -1, gap = 0;
        vector<int> v(count);
        for(int j = 0; j < count; j++)
            cin >> v[j], mn = min(mn, v[j]), mx = max(mx, v[j]);
        sort(v.begin(), v.end());
        for(int j = 0; j < count - 1; j++)
            if(v[j] != v[j + 1])
                gap = max(gap, v[j + 1] - v[j]);

        cout << "Class " << i + 1 << "\n";
        cout << "Max " << mx << ", Min " << mn << ", Largest gap " << gap << "\n";
    }
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