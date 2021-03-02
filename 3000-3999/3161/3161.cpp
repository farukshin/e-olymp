//https://www.e-olymp.com/ru/problems/3161
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;


void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    map<int, deque<int>> d;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        //while(cin>>s)
    {
        string s;
        cin >> s;
        int a, b;
        cin >> a;

        if((s == "popfront" || s == "popback") && d[a].empty())
            cout << "error" << endl;

        else if(s == "pushback")
        {
            cin >> b;
            d[a].push_back(b);
        }
        else if(s == "pushfront")
        {
            cin >> b;
            d[a].push_front(b);
        }
        else if(s == "popfront")
        {
            auto f = d[a].front();
            d[a].pop_front();
            cout << f << endl;
            if(d[a].size() == 0)
                d.erase(a);
        }
        else if(s == "popback")
        {
            auto f = d[a].back();
            d[a].pop_back();
            cout << f << endl;
            if(d[a].size() == 0)
                d.erase(a);
        }
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