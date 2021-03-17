//https://www.e-olymp.com/ru/problems/1141
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    vector<int>v;

    while(cin >> n)
        v.push_back(n);

    int size = v.size();


    if(size % 2 == 0)
    {
        cout << -1 << endl;
        return;
    }
    else if(size == 1)
    {
        cout << v[0] << endl;
        return;
    }

    sort(v.begin(), v.end());

    int l = size / 2;

    for(int i = l - 1; i > 0; i--)
        if(v[i] != v[l] && v[2 * l - i] != v[l])
            break;
        else if(v[i] == v[2 * l - i] && v[i] == v[l])
            continue;
        else
        {
            cout << -1;
            return;
        }
    cout << v[l];
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