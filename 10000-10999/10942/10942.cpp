// https://www.eolymp.com/ru/problems/10942
#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

void solve()
{
    int k, ans = 0;
    string s;
    cin >> k;
    while (cin >> s)
    {
        int cnt = 0;
        for (auto ch : s)
            if (ch >= 'A' && ch <= 'Z')
                cnt++;
        if (cnt >= k)
            ans++;
    }
    cout << ans;
}

int main()
{
    solve();
    return 0;
}
