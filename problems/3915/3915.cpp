// https://www.e-olymp.com/ru/problems/3915
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s, s2;
    set<char> st;
    set<int> st2;
    char ch;
    int k;
    getline(cin, s);
    getline(cin, s2);
    istringstream  io(s2);
    while(io >> ch)
        st.insert(ch);
    getline(cin, s2);
    istringstream  io2(s2);
    while(io2 >> k)
        st2.insert(k);
    cin >> ch;

    for(int i = 0; i < s.length(); i++)
        if(st.count(s[i]) && st2.count(i) == 0)
            s[i] = ch;
    cout << s;
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