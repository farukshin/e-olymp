//https://www.e-olymp.com/ru/problems/1344
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    //cout.setf(std::ios::fixed);
    //cout.precision(6);

    int n;
    cin >> n;
    vector<pair<int, string>> v;
    for(int i = 0; i < n; i++)
    {
        string s1, s2, s3, s4;
        cin >> s1 >> s2 >> s3 >> s4;
        int d;
        if(s3.substr(0, 2) == "10")
            d = 10;
        else if(s3.substr(0, 2) == "11")
            d = 11;
        else
            d = (s3[0] - '0');
        v.push_back({d, s3 + " " + s1 + " " + s2 + " " + s4});
    }
    sort(v.begin(), v.end());
    for(auto s : v)
        cout << s.second << endl;

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