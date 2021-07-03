// https://www.e-olymp.com/ru/problems/7546
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    set<string> st;

    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        st.insert(s);
    }
    cout << st.size() << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    //solve();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}