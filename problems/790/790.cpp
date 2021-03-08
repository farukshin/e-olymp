//https://www.e-olymp.com/ru/problems/790
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    //cout.setf(std::ios::fixed);
    //cout.precision(6);

    int n;
    priority_queue<pair<int, int> > q1;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q2;
    set<pair<int, int>> inQueue;
    while(cin >> n)
    {
        if(n == 0) break;

        if(n == 1)
        {
            int k, p;
            cin >> k >> p;
            q1.push({p, k});
            q2.push({p, k});
            inQueue.insert({p, k});
        }
        else if(n == 2)
        {
            while(true)
            {
                if(q1.size() == 0)
                {
                    cout << 0 << endl;
                    break;
                }
                auto cur = q1.top();
                if(inQueue.count({cur.first, cur.second}) > 0)
                {
                    cout << cur.second << endl;
                    q1.pop();
                    inQueue.erase({cur.first, cur.second});
                    break;
                }
                else q1.pop();
            }
        }
        else if(n == 3)
        {
            while(true)
            {
                if(q2.size() == 0)
                {
                    cout << 0 << endl;
                    break;
                }
                auto cur = q2.top();
                if(inQueue.count({cur.first, cur.second}) > 0)
                {
                    cout << cur.second << endl;
                    q2.pop();
                    inQueue.erase({cur.first, cur.second});
                    break;
                }
                else q2.pop();
            }
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
    //int t; cin >> t; while (t--) solve();

    return 0;
}