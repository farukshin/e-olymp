// https://www.e-olymp.com/ru/problems/8255
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int sm(int n)
{
    int ans = 0;
    while(n)
    {
        ans += (n % 10);
        n /= 10;
    }
    return ans;
}

void solve()
{
    int n, s;
    cin >> n >> s;
    int a = (n == 1 ? 0 : 1 * pow(10, n - 1)), b = stoi(string(n, '9'));
    for(int i = a; i <= b; i++)
        if(sm(i) == s)
            cout << i << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(3);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}