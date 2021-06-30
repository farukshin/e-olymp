// https://www.e-olymp.com/ru/problems/8361
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int ans = 0;
set<pair<int, int>> st;

map<pair<char, pair<int, int>>, pair<int, int>> mp =
{
    {{'R', {-1, 0}}, {0, 1}},
    {{'L', {-1, 0}}, {0, -1}},

    {{'R', {1, 0}}, {0, -1}},
    {{'L', {1, 0}}, {0, 1}},

    {{'R', {0, -1}}, {-1, 0}},
    {{'L', {0, -1}}, {1, 0}},

    {{'R', {0, 1}}, {1, 0}},
    {{'L', {0, 1}}, {-1, 0}}
};

void updNext(pair<int, int> & cur, pair<int, int> & next, char ch)
{
    next = mp[ {ch, {next.first  - cur.first, next.second - cur.second}}];
    next.first += cur.first;
    next.second += cur.second;
    //cout<< "upd next to {"<<next.first<<", "<<next.second<<"}\n";
}

bool run(pair<int, int> & cur, pair<int, int> & next)
{
    ans++;
    pair<int, int> nnext = next;
    nnext.first  += next.first  - cur.first;
    nnext.second += next.second - cur.second;
    //cout<<"run from {"<< cur.first<<", "<<cur.second<<"} to {"<<next.first<<", "<<next.second<<"}\n";
    cur = next;
    next = nnext;
    if(st.count(cur))
    {
        cout << ans;
        return true;
    }

    st.insert(cur);
    return false;
}

void solve()
{
    string s;
    cin >> s;
    pair<int, int> cur = {0, 0}, next = {-1, 0};
    st.insert({0, 0});

    for(int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        if(ch == 'L' || ch == 'R')
            updNext(cur, next, ch);
        else if (ch == 'S')
            if (run(cur, next))
                break;
        if(i == s.size() - 1)
            cout << -1;
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}