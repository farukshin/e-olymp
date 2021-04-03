// https://www.e-olymp.com/ru/problems/5085
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;

    for(int i = 0; i < n; i++)
        cout << (s1[i] == s2[i] ? '0' : '1' );

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    // cout.setf(std::ios::fixed); cout.precision(2);

    solve();
    return 0;
}