//https://www.e-olymp.com/ru/problems/3570
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
    string s;
    getline(cin, s);

    for(int i = 0; i < n; i++)
    {
        getline(cin, s);

        int kg = 0, kb = 0;
        for(auto ch : s)
            if(ch == 'g' || ch == 'G') kg++;
            else if(ch == 'b' || ch == 'B') kb++;
        cout << s << " is " << (kg == kb ? "NEUTRAL" :  kg > kb ? "GOOD" : "A BADDY") << (i == n - 1 ? "" : "\n");
    }
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