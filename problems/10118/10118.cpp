// https://www.e-olymp.com/ru/problems/10118
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    string s1, s2;
    cin >> n >> s1 >> s2;

    bool conv = false;
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        if(s1[i] != s2[i] && conv)
            continue;
        else if(s1[i] != s2[i] && !conv)
            conv = true;
        else if(s1[i] == s2[i] && conv)
            conv = false, ans++;
        else if(s1[i] == s2[i] && !conv)
            continue;
    }
    ans += (conv ? 1 : 0);
    cout << ans;
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