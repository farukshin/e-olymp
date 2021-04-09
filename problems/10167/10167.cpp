// https://www.e-olymp.com/ru/problems/10167
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

map<int, int> komand;
map<int, queue<int>> mp;
queue<int> q;
set<int> st;

void check(string & s)
{
    if(s == "ENQUEUE")
    {
        int cur;
        cin >> cur;
        if(st.count(komand[cur]) == 0)
            q.push(komand[cur]);
        mp[komand[cur]].push(cur);
        st.insert(komand[cur]);
    }
    else if(s == "DEQUEUE")
    {
        auto comm = q.front();
        if(mp[comm].size() == 1)
        {
            q.pop();
            st.erase(comm);
        }
        cout << mp[comm].front() << "\n";
        mp[comm].pop();
    }
}

void solve()
{
    int t;
    cin >> t;


    for(int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        for(int j = 0; j < n; j++)
        {
            int cur;
            cin >> cur;
            komand[cur] = i;
        }
    }

    string s;
    while(cin >> s)
        check(s);
}

int main()
{
    solve();
    return 0;
}