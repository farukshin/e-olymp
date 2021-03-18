// https://www.e-olymp.com/ru/problems/8355
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
void solve()
{
    int n;
    cin >> n;
    deque<int> dq;

    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a;
        if(a == 1 || a == 2)
            cin >> b;
        if(a == 1)
            dq.push_front(b);
        else if(a == 2)
            dq.push_back(b);
        else if(a == 3)
        {
            cout << dq.front() << "\n";
            dq.pop_front();
        }
        else if(a == 4)
        {
            cout << dq.back() << "\n";
            dq.pop_back();
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    return 0;
}