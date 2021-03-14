//https://www.e-olymp.com/ru/problems/4259
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

struct stack_min
{
    stack<pair<int, int>> st;

    int minimum()
    {
        int minima = st.top().second;
        return minima;
    };

    void push(int new_element)
    {
        int minima = st.empty() ? new_element : min (new_element, st.top().second);
        st.push (make_pair (new_element, minima));
    };

    void pop()
    {
        int result = st.top().first;
        st.pop();
    };
};

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    cin >> n;
    stack_min st;

    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a;
        if(a == 1)
        {
            cin >> b;
            st.push(b);
        }
        else if(a == 2)
            st.pop();
        else if(a == 3)
            cout << st.minimum() << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}