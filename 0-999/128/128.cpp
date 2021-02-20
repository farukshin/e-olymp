//https://www.e-olymp.com/ru/problems/128
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

bool check(int i, int n)
{
    string s = to_string(i);
    int sum1 = (s[0] - '0') + (s[1] - '0') + (s[2] - '0');
    int sum2 = (s[3] - '0') + (s[4] - '0') + (s[5] - '0');
    if (sum1 == sum2 && sum1 == n && sum2 == n)
        return true;
    else
        return false;
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);
    int S, k = 0;
    std::cin >> S;
    for (int a = 0; a < 10; a++)
        for (int b = 0; b < 10; b++)
            for (int c = 0; c < 10; c++)
                if (a + b + c == S)
                    k++;
    std::cout << k * k << std::endl;
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