//https://www.e-olymp.com/ru/problems/8982
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    //std::cout.setf(std::ios::fixed);
    //std::cout.precision(4);
    string s;
    getline(cin, s);

    queue<int> q;

    for (int i = 0; i < s.length(); i++)
        if (s[i] == 'a')
            q.push(i);

    if (q.empty())
        cout << -1;
    else
        while (!q.empty())
            cout << q.front() << " ", q.pop();
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}
