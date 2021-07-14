// https://www.e-olymp.com/ru/problems/6069
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    vector<int> v1(3);
    vector<int> v2(7);
    for(int i = 0; i < 3; i++)
        cin >> v1[i];
    for(int i = 0; i < 7; i++)
        cin >> v2[i];

    vector<pair<ld, pair<int, int>>> ans;
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 7; j++)
            ans.push_back({1.0 * v1[i] / v2[j], {i, j}});
    sort(ans.begin(), ans.end());
    for(auto d : ans)
        cout << d.first << " " << d.second.first + 1 << " " << d.second.second + 1 << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(2);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}