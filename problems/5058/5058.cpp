//https://www.e-olymp.com/ru/problems/5058
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(9);

    //int n;
    //cin>>n;

    map<char, char> mp =
    {
        {'(', ')'},
        {')', '('},
        {'{', '}'},
        {'}', '{'},
        {'[', ']'},
        {']', '['}
    };
    string s;
    // getline(cin,s);

    // for(int i=0;i<n;i++)
    // {
    getline(cin, s);
    stack<char> st;
    bool success = true;
    for(auto ch : s)
        if(ch != '(' && ch != '[' && ch != ')' && ch != ']' && ch != '{' && ch != '}')
            continue;
        else if(ch == '(' || ch == '[' || ch == '{')
            st.push(ch);
        else if(st.size() > 0 && mp[ch] == st.top())
            st.pop();
        else
        {
            success = false;
            break;
        }

    if(success && !st.empty())
        success = false;
    cout << (success ? "yes\n" : "no\n");
    //}

}

int main()
{
    //ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}