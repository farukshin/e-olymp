//https://www.e-olymp.com/ru/problems/693
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

struct stack_min
{
    stack<pair<int, int>> st;

    int minimum()
    {
        int minima = st.size() > 0 ? st.top().second : 0;
        return minima;
    };

    void push(int new_element)
    {
        int minima = st.empty() ? new_element : min (new_element, st.top().second);
        st.push (make_pair (new_element, minima));
    };

    void pop()
    {
        if(st.size() > 0)
        {
            int result = st.top().first;
            st.pop();
        }
    };

    int top()
    {
        int result = st.top().first;
        return result;
    };

    int size()
    {
        int result = st.size();
        return result;
    };
};

void solve()
{
    ll n, a, b, c;
    int curX;
    cin >> n >> a >> b >> c >> curX;
    int mod = 1000 * 1000;
    stack_min st;

    ll ans = 0;
    for(int i = 0; i < n; i++)
    {
        ll cur = ((a * curX * curX + b * curX + c) / 100) % mod;
        curX = int(cur);
        if(curX % 5 >= 2)
            st.push(curX);
        else if(st.size() > 0)
            st.pop();
        ans += st.minimum();
    }
    cout << ans;
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