// https://www.e-olymp.com/ru/problems/2615
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int n;
stack<char> st;

void clear()
{
    int sz = st.size();
    while(sz)
        if(sz > n)
            cout << n << " 0 ", sz -= n;
        else
            cout << sz << " ", sz -= sz;

    while(!st.empty())
        st.pop();
}

void solve()
{
    cin >> n;

    char ch;
    bool first = true;

    while(cin >> ch)
    {
        if(first)
        {
            first = false;
            if(ch == '1')
                cout << "0 ";
        }

        if(!st.empty() && st.top() != ch)
            clear();

        st.push(ch);
        if(ch == '2') break;
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(2);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}