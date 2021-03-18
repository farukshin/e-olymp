// https://www.e-olymp.com/ru/problems/3255
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    char ch;
    int n;
    stack<int> st;
    cin >> n;
    st.push(n);
    while(cin >> ch)
    {
        cin >> n;
        if(ch == '+')
            n += st.top();
        else n *= st.top();
        st.pop();
        st.push(n);
    }
    cout << st.top();
    st.pop();
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}