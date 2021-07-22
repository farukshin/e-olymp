// https://www.e-olymp.com/ru/problems/10364
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    vector<int> v(7);
    set<int> st;
    for(int i = 0; i < 7; i++)
    {
        cin >> v[i];
        st.insert(v[i]);
    }
    sort(v.begin(), v.end());

    for(int i = 0; i < 7; i++)
        for(int j = i + 1; j < 7; j++)
            for(int k = j + 1; k < 7; k++)
            {
                int a = v[i];
                int b = v[j];
                int c = v[k];
                if((a + b + c) == v[6] && st.count(a + b) && st.count(b + c) && st.count(a + c) && st.count(a + b + c))
                    cout << a << " " << b << " " << c;
            }
}

int main()
{
    solve();
    //int t; cin >> t; while (t--) solve();
    return 0;
}