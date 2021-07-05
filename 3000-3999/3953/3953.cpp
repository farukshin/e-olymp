// https://www.e-olymp.com/ru/problems/3953
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s;
    cin >> s;
    //cout<<s<<"\n";
    string s1 = "", s2 = "";
    s1 += s[0], s1 += s[4], s1 += s[5];
    s2 += s[1], s2 += s[2], s2 += s[3];
    set<string> st1, st2;
    // cout<<s1<<"\n";
    // cout<<s2<<"\n";
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    do
    {
        st1.insert(s1);
    }
    while(next_permutation(s1.begin(), s1.end()));

    do
    {
        st2.insert(s2);
    }
    while(next_permutation(s2.begin(), s2.end()));

    cout << st1.size() * st2.size() << "\n";
    for(auto d1 : st1)
        for(auto d2 : st2)
            cout << d1[0] << d2 << d1[1] << d1[2] << "\n";
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