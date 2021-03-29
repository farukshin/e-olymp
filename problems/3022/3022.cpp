// https://www.e-olymp.com/ru/problems/3022
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int a, b, c, s;
vector<int> v;
map<int, int> mp;
set<int> st;
ll ind = 0;

void bts(int n)
{
    int i = 0;
    while(n)
    {
        if(n & 1)
            cout << i << " ";
        n = n >> 1;
        i++;
    }
    cout << "\n";
}

void check(int l, int r)
{
    int n = r - l + 1;
    //cout<<"n="<<n<<" l="<<l<<" r="<<r<<"\n";

    vector<int> sum1(16, 0);
    vector<int> sum0(16, 0);

    for(int i = l; i <= r; i++)
    {

        int cur = v[i];
        //cout<<cur<<"\n";
        for(int j = 15; j >= 0; j--)
        {
            if(cur & 1)
                sum1[j]++;
            else
                sum0[j]++;
            cur = cur >> 1;
        }
    }
    for(int i = 0; i < 16; i++)
        cout << (sum1[i] == n ? "1" : (sum0[i] == n ? "0" : "?"));
    cout << "\n";
}

int next()
{
    int res = (a * s + b) % c;
    return res;
}

void gen()
{
    v.clear();
    mp.clear();
    st.clear();
    ind = -1;

    while(true)
    {
        if(st.size() == 65536)
        {
            check(mp[s], ind);
            break;
        }
        else if(st.count(s) == 0)
        {
            ind++;
            mp[s] = ind;
            st.insert(s);
            v.push_back(s);
        }
        else
        {
            //check(mp[s], ind);
            check(0, ind);
            break;
        }
        s = next();
    }
}

void solve()
{
    while(cin >> a >> b >> c >> s)
        gen();
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