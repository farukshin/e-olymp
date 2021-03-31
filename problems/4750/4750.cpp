// https://www.e-olymp.com/ru/problems/4750
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>>v(n, vector<int>(n));
    int k = 1;
    for(int i = 0; i < n; i++)
        if(i % 2 == 0)
            for(int j = 0; j < n; j++)
                v[i][j] = k, k++;
        else
            for(int j = n - 1; j >= 0; j--)
                v[i][j] = k, k++;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cout << v[i][j] << " ";
        cout << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    // cout.setf(std::ios::fixed); cout.precision(2);

    solve();
    return 0;
}