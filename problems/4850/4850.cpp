// https://www.e-olymp.com/ru/problems/4850
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int a, b;

int sum(int n)
{
    int ans = 0;
    while(n)
    {
        ans += n % 10;
        n /= 10;
    }
    return ans;
}

int bfs()
{
    queue<pair<int, int>> q;
    q.push({a, 0});
    set<int> st;
    st.insert(a);

    while(!q.empty())
    {
        auto cur = q.front();
        q.pop();

        int num = cur.first;
        int len = cur.second;

        if(num == b)
            return len;

        int newN;
        newN = num * 3;
        if(!st.count(newN) && newN >= 0 && newN <= 9999)
            q.push({newN, len + 1}), st.insert(newN);

        newN = num + sum(num);
        if(!st.count(newN) && newN >= 0 && newN <= 9999)
            q.push({newN, len + 1}), st.insert(newN);

        newN = num - 2;
        if(!st.count(newN) && newN >= 0 && newN <= 9999)
            q.push({newN, len + 1}), st.insert(newN);
    }
    return INT_MAX;
}

void solve()
{
    cin >> a >> b;
    int ans = bfs();
    cout << (ans == INT_MAX ? -1 : ans);
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