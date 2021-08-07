//https://www.e-olymp.com/ru/problems/4417
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

bool mySort(string s1, string s2)
{
    return (s1 + s2) > (s2 + s1);
}

void solve()
{
    vector<string> v;
    string cur;
    while(cin >> cur)
        v.push_back(cur);

    sort(begin(v), end(v), mySort);
    for(auto d : v)
        cout << d;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(2);

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}