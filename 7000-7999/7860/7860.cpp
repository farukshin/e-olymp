// https://www.e-olymp.com/ru/problems/7860
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

map<string, int> mp1, mp2;

void solve()
{
    int n;
    cin >> n;
    string cur;
    for(int i = 0; i < n; i++)
        cin >> cur, mp1[cur]++;
    for(int i = 0; i < n; i++)
        cin >> cur, mp2[cur]++;
    int ans = 0;
    for(auto d : mp1)
        ans += min(d.second, mp2[d.first]);
    cout << ans;
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