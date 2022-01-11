// https://www.eolymp.com/ru/problems/10941
#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    if (s[0] == 'F')
        cout << -1;
    else if (s[n - 1] == 'T')
        cout << n - 1;
    else
        for (int i = 0; i < n; i++)
            if (s[i] == 'F')
            {
                cout << i - 1;
                break;
            }
}

int main()
{
    solve();
    return 0;
}
