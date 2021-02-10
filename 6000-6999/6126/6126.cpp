//https://www.e-olymp.com/ru/problems/6126
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(3);

    string s;
    int n;
    queue<int> q;

    while (cin >> s)
    {
        if (s == "exit")
        {
            cout << "bye" << endl;
            break;
        }

        if (s == "push")
        {
            cin >> n;
            q.push(n);
            cout << "ok" << endl;
        }
        else if (s == "size")
            cout << q.size() << endl;
        else if (s == "pop")
        {
            if (q.empty())
                cout << "error" << endl;
            else
                cout << q.front() << endl, q.pop();
        }
        else if (s == "front")
            if (q.empty())
                cout << "error" << endl;
            else
                cout << q.front() << endl;
        else if (s == "clear")
        {
            while (!q.empty())
                q.pop();
            cout << "ok" << endl;
        }
    }
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