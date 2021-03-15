//https://www.e-olymp.com/ru/problems/185
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

bool mysort(pair<ld, pair<int, int>> p1, pair<ld, pair<int, int>> p2)
{
    if (p1.first == p2.first)
        return p1.second.first > p2.second.first;
    else
        return p1.first < p2.first;
}

void solve()
{
    cout.setf(std::ios::fixed);
    cout.precision(2);

    int n;
    cin >> n;
    vector<pair<ld, pair<int, int>>> v;

    string s;
    getline(cin, s);
    for(int i = 1; i <= n; i++)
    {
        getline(cin, s);
        istringstream iss(s);

        string word;
        int ksl = 0, kw = 0;
        while(iss >> word)
        {
            kw++;
            for(auto ch : word)
            {
                char c = (ch >= 'A' && ch <= 'Z' ? 'a' + (ch - 'A') : ch);
                if(c == 'a' || c == 'o' || c == 'e' || c == 'u')
                    ksl++;
            }
        }
        ld l = 1.0 * ksl / kw;
        v.push_back({l, {kw, i}});
    }
    sort(v.begin(), v.end(), mysort);
    //cout<< v[0].first <<" " << v[0].second.first <<" " << v[0].second.second<<endl;
    //cout<< v[1].first <<" " << v[1].second.first <<" " << v[1].second.second<<endl;

    if(n > 1 && v[0].first == v[1].first && v[0].second.first == v[1].second.first)
        cout << "O-o-o-rks..." << endl;
    else
        cout << v[0].second.second << endl;
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