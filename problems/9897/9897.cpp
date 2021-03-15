//https://www.e-olymp.com/ru/problems/9897
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

bool mysort(pair<int, pair<int, string>>p1, pair<int, pair<int, string>> p2)
{
    if(p1.first == p2.first)
        return p1.second.first < p2.second.first;
    else
        return p1.first < p2.first;
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    cin >> n;

    string s;
    getline(cin, s);

    for(int j = 0; j < n; j++)
    {
        getline(cin, s);
        stringstream is(s);
        vector<pair<int, pair<int, string>>> v;

        string cur;
        int i = 0;
        while(is >> cur)
        {
            i++;
            v.push_back({cur.length(), {i, cur} });
        }
        sort(v.begin(), v.end(), mysort);
        for(auto d : v)
            cout << d.second.second << " ";
        cout << "\n";
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