//https://www.e-olymp.com/ru/problems/7596
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin>>n;
    map<int, string> mp = {
        {1, "1 4 9 16 25 36 49 64 81 100"},
        {2, "2 5 10 17 26 37 50 65 82 101"},
        {3, "2 6 12 20 30 42 56 72 90 110"},
        {4, "2 4 8 16 32 64 128 256 512 1024"},
        {5, "1 8 27 64 125 216 343 512 729 1000"},
        {6, "1 2 6 24 120 720 5040 40320 362880 3628800"}
    };

    cout << mp[n] <<endl;

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
