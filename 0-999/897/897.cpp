//https://www.e-olymp.com/ru/problems/897
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    //cout.setf(std::ios::fixed);
    //cout.precision(2);

    int n;
    cin >> n;

    string s;
    getline( cin, s );
    map<string, vector<string>> mp;

    for(int i = 0; i < n; i++)
    {
        int num;
        getline(cin, s);
        istringstream parse(s);

        string word, cur;
        parse >> word;
        parse >> cur;
        while (parse >> cur)
        {
            if(cur[cur.size() - 1] == ',')
                cur = cur.substr(0, cur.size() - 1);
            mp[cur].push_back(word);
        }
    }
    cout << mp.size() << endl;
    for(auto p : mp)
    {
        sort(p.second.begin(), p.second.end());
        cout << p.first << " -";
        for(int i = 0; i < p.second.size(); i++)
            cout << (i == 0 ? " " : ", ") << p.second[i];
        cout << endl;
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
    //int t;cin >> t;while (t--)solve();

    return 0;
}