// https://www.e-olymp.com/ru/problems/5247
//#include <bits/stdc++.h>
//#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
typedef long long int ll;

void solve()
{
    string s;
    cin >> s;

    int n = (int) s.length();
    int i = 0;
    while (i < n)
    {
        int j = i + 1, k = i;
        while (j < n && s[k] <= s[j])
        {
            if (s[k] < s[j])
                k = i;
            else
                ++k;
            ++j;
        }
        while (i <= k)
        {
            cout << s.substr (i, j - k) << '\n';
            i += j - k;
        }
    }

}

int main()
{
    solve();
    return 0;
}
