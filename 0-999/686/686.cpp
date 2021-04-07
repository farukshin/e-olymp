// https://www.e-olymp.com/ru/problems/686
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    set<int> st;
    char pre = '@';
    int preN;
    int mod = 1e9;

    for(int i = 0; i < n; i++)
    {
        char a;
        int b;
        cin >> a >> b;
        if(a == '+' && pre != '?')
            st.insert(b);
        else if(a == '+' && pre == '?')
            st.insert((b + preN) % mod);
        else if(a == '?')
        {
            auto it = st.lower_bound(b);
            preN = (it == st.end() ? -1 : *it);
            cout << preN << "\n";
        }
        pre = a;
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin >> t; while(t--) solve();
    return 0;
}