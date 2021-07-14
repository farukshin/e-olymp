// https://www.e-olymp.com/ru/problems/4854
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    string s;
    getline(cin, s);
    vector<vector<int>> ss(n);
    for(int i = 0; i < n; i++)
    {
        getline(cin, s);
        istringstream io(s);
        int cur;
        while(io >> cur)
            ss[--cur].push_back(i);
    }

    cout << n << "\n";
    for(int i = 0; i < n; i++)
    {
        for(auto d : ss[i])
            cout << d + 1 << " ";
        cout << "\n";
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