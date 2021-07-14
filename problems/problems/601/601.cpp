// https://www.e-olymp.com/ru/problems/601
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, k;
    int sumL = 0, sumR = 0, sum = 0;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        sum += cur;
    }
    int step = 0;
    if(k == 1 || k == n)
        step = n - 1;
    else
        step = min((n - k - 1) * 2 + 1  + 1 +  (k - 1),  (k - 2) * 2 + 1  + 1 + n - k);

    cout << sum + step;
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