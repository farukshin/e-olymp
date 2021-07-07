// https://www.e-olymp.com/ru/problems/1987
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    string s1 = s;
    next_permutation(s.begin(), s.end());
    string s2 = s;
    cout << n << " " << (s2 > s1 ? s2 : "BIGGEST") << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    //solve();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}