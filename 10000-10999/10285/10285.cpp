// https://www.eolymp.com/ru/problems/10285
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string s;

bool check(int len)
{
    if (s.size() <= len)
        return true;
    set<string> st;
    bool res = true;
    for (int i = 0; i <= s.size() - len; i++)
    {
        string ss = s.substr(i, len);
        if (st.count(ss))
        {
            res = false;
            break;
        }
        st.insert(ss);
    }
    //cout<< "len="<<len<<", res="<<res<<endl;
    return res;
}

void solve()
{
    int n;
    cin >> n >> s;
    int l = 1, r = 101;
    while (r > l + 1)
    {
        //cout<<"l="<<l<<", r="<<r<<endl;
        int mid = (r + l) / 2;
        if (check(mid))
            r = mid;
        else
            l = mid;
    }
    if (r == 1)
        cout << r;
    else if (check(r - 1))
        cout << r - 1;
    else
        cout << r;
}

int main()
{
    solve();
    return 0;
}
