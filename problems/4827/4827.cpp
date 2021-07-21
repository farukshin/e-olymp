// https://www.e-olymp.com/ru/problems/4827
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int k;
string cur;
set<pair<int, string>> st;

string get()
{
    if(st.empty())
        return "";

    auto it = st.begin();
    return (*it).second;
}

void add(string cur)
{
    st.insert({cur.length(), cur});
    if(st.size() > k)
        st.erase(st.begin());
}

void solve()
{
    cin >> k;
    while(cin >> cur)
        add(cur);
    cout << get();
}

int main()
{
    solve();
    //int t; cin >> t; while (t--) solve();
    return 0;
}