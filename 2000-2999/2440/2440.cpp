//https://www.e-olymp.com/ru/problems/2440
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        priority_queue<int> q;
        for(int i = 0; i < 10; i++)
        {
            int cur;
            cin >> cur;
            q.push(cur);
        }
        q.pop();
        q.pop();
        cout << n << " " << q.top() << "\n";
    }

}

int main()
{
    //cout.setf(std::ios::fixed); cout.precision(6);
    solve();
    return 0;
}