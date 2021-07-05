// https://www.e-olymp.com/ru/problems/3784
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int check(string s)
{
    int ans = 0, curAns = 0;
    char cur = '#';
    for(auto ch : s)
        if(ch != cur)
            ans = max(ans, curAns), curAns = 1, cur = ch;
        else
            curAns++;
    ans = max(ans, curAns);
    return ans;
}

void solve()
{
    string s;
    while(cin >> s)
        cout << check(s) << "\n";
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