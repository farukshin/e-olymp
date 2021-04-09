// https://www.e-olymp.com/ru/problems/10143
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    while(cin >> n)
    {
        if(n == 0) break;
        queue<int> q;
        for(int i = 1; i <= n; i++)
            q.push(i);

        cout << "Discarded cards: ";
        while(q.size() > 1)
        {
            int cur = q.front();
            q.pop();
            cout << cur << (q.size() >= 2 ? ", " : " ");

            cur = q.front();
            q.pop();
            q.push(cur);
        }
        cout << "\nRemaining card: " << q.front() << "\n";
    }


}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin >> t; while(t--) solve();
    return 0;
}