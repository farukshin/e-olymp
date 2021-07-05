// https://www.e-olymp.com/ru/problems/2713
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int kk(int n)
{
    int ans = 0;
    while(n)
        n /= 10, ans++;
    return ans;
}

int cc(ll n, int k)
{
    stack<int> st;
    while(n)
        st.push(n % 10), n /= 10;

    while(!st.empty() && --k)
        st.pop();

    return (!st.empty() ? st.top() : -1);

}

void solve()
{
    int n;
    cin >> n;
    int k = 2;
    if(n < 3)
    {
        cout << 1;
        return;
    }

    ll cur = 1, precur = 1;
    while(true)
    {
        int l = kk(cur + precur);
        if(k + l >= n)
            break;
        else
        {
            k += l;
            ll tt = cur + precur;
            precur = cur;
            cur = tt;
        }
    }
    cur += precur;
    cout << cc(cur, n - k);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(3);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}