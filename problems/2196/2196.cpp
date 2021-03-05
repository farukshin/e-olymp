//https://www.e-olymp.com/ru/problems/2196
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    string s;
    int n;
    cin >> s >> n;
    for(int i = 0; i < n; i++)
    {
        char f;
        int a, b;
        cin >> f >> a >> b;
        if(f == 'R')
            reverse(s.begin() + a - 1, s.begin() + b);
        else if(f == 'S')
            sort(s.begin() + a - 1, s.begin() + b);
    }
    cout << s << endl;

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}