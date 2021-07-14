// https://www.e-olymp.com/ru/problems/3551
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int t;
    cin >> t;
    string s;
    getline(cin, s);

    for(int i = 0; i < t; i++)
    {
        int n, k;
        //cin>>n>>k;
        getline(cin, s);
        istringstream io(s);
        io >> n >> k;
        s = s.substr(to_string(n).length() + 2 + to_string(k).length());
        //cout<<s<<"\n";
        cout << n << " ";
        for(auto ch : s)
            if(ch == ' ')
                cout << ch;
            else
                cout << string(k, ch);
        cout << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(2);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}