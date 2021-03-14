//https://www.e-olymp.com/ru/problems/2303
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

typedef long long ll;
typedef long double ld;

struct Vertex
{
    map<char, Vertex*> to;
    bool terminal = false;
    Vertex () { ; };
};

bool success;

void add_string(string &s, Vertex * root)
{
    Vertex *v = root;
    for (char c : s)
    {
        if (!v->to[c])
            v->to[c] = new Vertex();
        v = v->to[c];
        if(v->terminal)
        {
            success = false;
            return;
        }
    }
    v->terminal = true;
    if(v->to.size())
        success = false;
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        //cin>>n;
        scanf("%d", &n);

        Vertex * root = new Vertex();
        success = true;
        string s;

        for(int i = 0; i < n; i++)
        {
            char st2[15];
            //cin>>s;
            scanf("%s", st2);
            s = string(st2);

            if(success)
                add_string(s, root);
        }

        if(success)
            printf("YES\n");
        else
            printf("NO\n");
        //cout<< ( success ? "YES\n" : "NO\n" );
        //delete(root);
    }
}

int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}