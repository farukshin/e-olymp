//https://www.e-olymp.com/ru/problems/6767
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void les(string &s, vector<string> &v, set<string> &st)
{
    string cur;
    istringstream iss (s);
    while(iss >> cur)
        v.push_back(cur);
}

void anim(string &s, vector<string> &v, set<string> &st)
{
    string cur;
    istringstream iss (s);
    bool fl = false;
    while(iss >> cur)
        if(fl)
            st.insert(cur);
        else if(cur == "goes")
            fl = true;
}

void fox(vector<string> &v, set<string> &st)
{
    for(auto w : v)
        if(st.count(w) == 0)
            cout << w << " " ;
    cout << "\n";
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    cin >> n;
    string s;
    getline(cin, s);

    for(int i = 0; i < n; i++)
    {
        vector<string> v;
        set<string> st;
        int k = 0;
        while(getline(cin, s))
        {
            k++;
            if(s == "what does the fox say?")
            {
                fox(v, st);
                break;
            }
            else if (k == 1)
                les(s, v, st);
            else
                anim(s, v, st);
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