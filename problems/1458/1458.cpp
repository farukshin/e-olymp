// https://www.e-olymp.com/ru/problems/1458
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    if(n == 1)
    {
        cout << v[0];
        return;
    }

    int a, b;
    if(n % 2 == 1)
    {
        int mid = n / 2;
        a = mid - 1;
        b = mid + 1;
    }
    else
    {
        b = n / 2;
        a = b - 1;
    }

    cout << v[a] << " ";
    for(int i = 0; i < n; i++)
        if(i != a && i != b)
            cout << v[i] << " ";
    if(n > 1)
        cout << v[b];
}

int main()
{
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL), cout.tie(NULL); cout.setf(std::ios::fixed); cout.precision(4);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}