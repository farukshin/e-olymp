// https://www.e-olymp.com/ru/problems/4007
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

bool check(int n, int cur, int b, map<int, int> & parr, queue<int> &q)
{
    if(n == b && parr.count(n) == 0)
    {
        parr[n] = cur;
        q.push(n);
        return true;
    }
    else if(n == b)
        return true;
    else if(parr.count(n) == 0)
    {
        parr[n] = cur;
        q.push(n);
        return false;
    }
    else if(parr.count(n) != 0)
        return false;
}

void bfs(int a, int b)
{
    queue<int> q;
    q.push(a);

    map<int, int> parr;
    parr[a] = -1;

    while(!q.empty())
    {
        auto cur = q.front();
        q.pop();

        int n;
        if(cur / 1000 != 9)
        {
            n = (cur / 1000 + 1) * 1000 + cur % 1000;
            if(check(n, cur, b, parr, q))
                break;
        }

        if(cur % 10 != 1)
        {
            n = cur - 1;
            if(check(n, cur, b, parr, q))
                break;
        }

        n = cur / 10 + (cur % 10) * 1000;
        if(check(n, cur, b, parr, q))
            break;

        n = (cur % 1000) * 10 + (cur / 1000);
        if(check(n, cur, b, parr, q))
            break;
    }

    if(parr.count(b) == 0)
    {
        cout << -1;
        return;
    }

    stack<int> st;
    st.push(b);
    int cur = b;
    while(cur != a)
        cur = parr[cur], st.push(cur);

    while(!st.empty())
        cout << st.top() << "\n", st.pop();
}

void solve()
{
    int a, b;
    cin >> a >> b;
    bfs(a, b);
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