// https://www.e-olymp.com/ru/problems/8353
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    vector<int> v;
    while(cin >> n)
        v.push_back(n);
    sort(v.begin(), v.end());
    set<int> st;

    for(int i = 0; i < v.size(); i++)
    {
        st.insert(v[i]);
        if(st.size() == 2)
            break;
    }

    for(int i = v.size() - 1; i >= 0; i--)
    {
        st.insert(v[i]);
        if(st.size() == 4)
            break;
    }


    int k = 0, sm = 0;
    for(int i = 0; i < v.size(); i++)
        if(!st.count(v[i]))
            k++, sm += v[i];
    int ans = (k == 0 ? 0 : round(1.0 * sm / k));
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}