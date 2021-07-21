// https://www.e-olymp.com/ru/problems/4755
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    stack<int> st;
    int pw = 13;
    int step = 1;

    while(n)
    {
        int cur = n % pw;
        n -= cur;

        for(int i = 2; i <= step; i++)
            cur /= 13;
        st.push(cur);

        pw *= 13;
        step++;
    }

    while(!st.empty())
    {
        int top = st.top();

        if(top >= 10)
        {
            char ch = 'A' + (top - 10);
            cout << ch;
        }
        else
            cout << top;
        st.pop();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL), cout.tie(NULL); cout.setf(std::ios::fixed); cout.precision(4);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}