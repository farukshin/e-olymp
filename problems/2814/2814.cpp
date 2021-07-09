// https://www.e-olymp.com/ru/problems/2814
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    stack<bool> st;
    do
    {
        st.push(n & 1);
        n = n >> 1;
    }
    while(n);
    st.pop();
    while(!st.empty())
        cout << (st.top() ? "SX" : "S"), st.pop();

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