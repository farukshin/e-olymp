//https://www.e-olymp.com/ru/problems/4286
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string s;
    cin >> s;
    set<char> st;
    for(auto ch : s)
        st.insert(ch);
    cout << st.size();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(2);

    solve();
    return 0;
}