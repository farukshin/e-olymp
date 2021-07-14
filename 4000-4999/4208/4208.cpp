//https://www.e-olymp.com/ru/problems/4208
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int a, b;
    cin >> a >> b;
    --a;
    int num1 = (a * log10(2.0) + 1);
    int num2 = (b * log10(2.0) + 1);
    cout << num2 - num1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(1);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}