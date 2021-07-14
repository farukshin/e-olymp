// https://www.e-olymp.com/ru/problems/3744
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

vector<int> parent;
vector<int> rang;

map<int, int> mp;

ll check(int n)
{
    ll ans = 0;
    int i = 1;
    while(n)
    {
        ans += mp[i] * (n % 10);
        n /= 10;
        i++;
    }
    return ans;
}

void solve()
{
    mp[0] = 1;
    for(int i = 1; i <= 9; i++)
        mp[i] = mp[i - 1] * i;

    int n;
    while(cin >> n, n != 0)
        cout << check(n) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(3);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}