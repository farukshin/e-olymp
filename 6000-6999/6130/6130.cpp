//https://www.e-olymp.com/ru/problems/6130
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

bool is_power_of_2(ll n)
{
    return (n != 0) && (n & (n - 1)) == 0;
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    deque<int> d;
    string s;
    while(cin >> s)
    {
        int a;

        if((s == "pop_front" || s == "pop_back" || s == "front" || s == "back") && d.empty())
            cout << "error" << endl;

        else if(s == "exit")
        {
            cout << "bye" << endl;
            break;
        }
        else if(s == "push_back")
        {
            cin >> a;
            d.push_back(a);
            cout << "ok" << endl;
        }
        else if(s == "push_front")
        {
            cin >> a;
            d.push_front(a);
            cout << "ok" << endl;
        }

        else if(s == "pop_front")
        {
            auto f = d.front();
            d.pop_front();
            cout << f << endl;
        }
        else if(s == "pop_back")
        {
            auto f = d.back();
            d.pop_back();
            cout << f << endl;
        }

        else if(s == "front")
        {
            auto f = d.front();
            cout << f << endl;
        }
        else if(s == "back")
        {
            auto f = d.back();
            cout << f << endl;
        }

        else if(s == "size")
        {
            auto f = d.size();
            cout << f << endl;
        }
        else if(s == "clear")
        {
            d.clear();
            cout << "ok" << endl;
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