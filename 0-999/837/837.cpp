// https://www.e-olymp.com/ru/problems/837
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s;
    cin >> s;
    set<string> st;
    sort(s.begin(), s.end());
    do
    {
        st.insert(s);
    }
    while(next_permutation(s.begin(), s.end()));

    for(auto d : st)
        cout << d << "\n";
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