//https://www.e-olymp.com/ru/problems/7537
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

    vector<int> v(n);
    ll sum = 0, winner = 0, winCost = -1, kol = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i] > winCost)
            winCost = v[i], kol = 1, winner = i + 1;
        else if(v[i] == winCost)
            kol++, winner = i + 1;
        sum += v[i];
    }

    if(kol > 1 || kol == 0)
        cout << "no winner" << endl;
    else if(sum / 2 < winCost)
        cout << "majority winner " << winner << endl;
    else
        cout << "minority winner " << winner << endl;

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    //solve();
    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}