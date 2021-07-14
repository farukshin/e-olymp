//https://www.e-olymp.com/ru/problems/1226
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;

    multiset<pair<int, int>> st;
    multiset<pair<int, int>>::iterator it;
    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        it = st.find({b, a});
        if(it == st.end())
            st.insert({a, b});
        else
            st.erase(it);
    }

    cout << (st.size() ? "NO" : "YES") << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(1);

    //solve();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}