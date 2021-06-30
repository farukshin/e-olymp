// https://www.e-olymp.com/ru/problems/694
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

stack< pair<int, int> > s1, s2;

int min_queue_getMin()
{
    if (s1.empty() && s2.empty())
        return 0;
    else if (s1.empty() || s2.empty())
        return s1.empty() ? s2.top().second : s1.top().second;
    else
        return min(s1.top().second, s2.top().second);
}

void min_queue_pop()
{
    if (s2.empty())
        while (!s1.empty())
        {
            int element = s1.top().first;
            s1.pop();
            int minima = s2.empty() ? element : min (element, s2.top().second);
            s2.push (make_pair (element, minima));
        }
    if(!s2.empty())
        s2.pop();
}

void min_queue_add(int new_element)
{
    int minima = s1.empty() ? new_element : min (new_element, s1.top().second);
    s1.push ({new_element, minima});
}


void solve()
{
    ll n, a, b, c;
    int curX;
    cin >> n >> a >> b >> c >> curX;
    ll mod = 1000 * 1000;
    ll ans = 0;

    for(int i = 0; i < n; i++)
    {
        ll cur = ((a * curX * curX + b * curX + c) / 100) % mod;
        curX = int(cur);
        if((curX % 5) < 2)
            min_queue_pop();
        else
            min_queue_add(curX);
        ans += min_queue_getMin();
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}