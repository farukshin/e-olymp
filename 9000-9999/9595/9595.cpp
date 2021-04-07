// https://www.e-olymp.com/ru/problems/9595
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

struct Vertex
{
    map<char, Vertex*> to;
    bool terminal = false;
    string str = "";
    int k = 0;
    Vertex () { ; };
};

void add_string(string &s, Vertex * root)
{
    bool print = false;
    Vertex *v = root;
    for (char c : s)
    {
        if (!v->to[c])
        {
            v->to[c] = new Vertex();
            v->to[c]->str = v->str + c;
            if(!print)
                cout << v->to[c]->str << "\n", print = true;
        }
        v = v->to[c];
    }
    v->terminal = true;
    v->k++;
    if(!print)
        cout << v->str << (v->k > 1 ? " " + to_string(v->k) : "") << "\n";

}

void solve()
{
    int n;
    cin >> n;

    Vertex * root = new Vertex();
    string s;

    for(int i = 0; i < n; i++)
        cin >> s, add_string(s, root);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin >> t; while(t--) solve();
    return 0;
}