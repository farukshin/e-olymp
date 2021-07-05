// https://www.e-olymp.com/ru/problems/3109
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s;
    while(getline(cin, s))
    {
        if(s == "END") break;
        set<char> st;
        bool success = true;
        for(auto ch : s)
            if(!(ch >= 'A' && ch <= 'Z'))
                continue;
            else if(st.count(ch) != 0)
            {
                success = false;
                break;
            }
            else
                st.insert(ch);
        st.clear();
        if(success)
            cout << s << "\n";
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