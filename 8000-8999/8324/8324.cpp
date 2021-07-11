// https://www.e-olymp.com/ru/problems/8324
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    set<int> st;

    for(int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        if(st.count(cur))
            cout << "Yes " << st.size() << "\n";
        else
            st.insert(cur), cout << "No " << st.size() << "\n";
    }
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