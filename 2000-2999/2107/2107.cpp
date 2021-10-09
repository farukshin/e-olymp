// https://www.e-olymp.com/ru/problems/2107
//#include <bits/stdc++.h>
//#include <cstdio>
#include <iostream>
//#include <vector>
//#include <cstring>
#include <string>
//#include <cassert>
//#include <algorithm>
using namespace std;
typedef long long int ll;

string min_cyclic_shift (string s)
{
    s += s;
    int n = (int) s.length();
    int i = 0, ans = 0;
    while (i < n / 2)
    {
        ans = i;
        int j = i + 1, k = i;
        while (j < n && s[k] <= s[j])
        {
            if (s[k] < s[j])
                k = i;
            else
                ++k;
            ++j;
        }
        while (i <= k)  i += j - k;
    }
    return s.substr (ans, n / 2);
}


void solve()
{
    string s;
    cin >> s;
    cout << min_cyclic_shift(s);

}

int main()
{
    solve();
    return 0;
}
