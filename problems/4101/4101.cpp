//https://www.e-olymp.com/ru/problems/4101
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    cin >> n;
    vector<int> v;

    for (int a = 1; a <= 9; a++)
    {
        if (a > n)
            continue;
        for (int b = 0; b <= 9; b++)
        {
            if (a + b > n)
                continue;
            for (int c = 0; c <= 9; c++)
                if (a + b + c > n)
                    continue;
                else if (a + b + c == n)
                    v.push_back(a * 100 + b * 10 + c);
            ;
        }
    }
    cout << v.size() << endl;
    if (v.size())
        for (auto d : v)
            cout << d << endl;
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