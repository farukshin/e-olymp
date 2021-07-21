// https://www.e-olymp.com/ru/problems/2329
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    queue<int> q;
    stack<int> st;

    bool inQ = true;
    for(int i = 0; i < n; i++)
    {
        if(inQ)
            q.push(v[i]);
        else
            st.push(v[i]);
        inQ = !inQ;
    }

    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    while(!st.empty())
    {
        cout << st.top() << " ";
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