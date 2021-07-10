// https://www.e-olymp.com/ru/problems/4415
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int s, n, sm = 0;
    cin >> s >> n;
    set<int> st;
    vector<pair<int, int>> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i].first, v[i].second = i, sm += v[i].first;
    if(sm < s)
    {
        cout << -1;
        return;
    }

    sort(v.begin(), v.end(), greater<pair<int, int>>());

    for(int i = 0; i < n; i++)
    {
        if(s <= 0)
            break;
        s -= v[i].first;
        st.insert(v[i].second);
    }
    cout << st.size() << "\n";
    for(auto d : st)
        cout << d + 1 << " ";



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