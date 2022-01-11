// https://www.eolymp.com/ru/problems/10923
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(5);
    for (auto &d : v)
        cin >> d;
    int cnt = 0;
    for (int i = 0; i < 5; i++)
        if (n >= v[i])
            cnt++, n -= v[i];
    cout << cnt;
}

int main()
{
    solve();
    return 0;
}
