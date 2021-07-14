// https://www.e-olymp.com/ru/problems/5443
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

vector<int> prefix_function (string s)
{
    int n = (int) s.length();
    vector<int> pi (n);
    for (int i = 1; i < n; ++i)
    {
        int j = pi[i - 1];
        while (j > 0 && s[i] != s[j])
            j = pi[j - 1];
        if (s[i] == s[j])  ++j;
        pi[i] = j;
    }
    return pi;
}

void solve()
{
    string s;
    cin >> s;
    vector<int> pp = prefix_function(s);
    int k = s.length() - pp[pp.size() - 1];
    cout << (s.length() % k == 0 ? k : s.length());
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(1);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}