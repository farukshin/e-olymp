//https://www.e-olymp.com/ru/problems/5132
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
    while(n--)
    {
        int tik, k;
        string s, ans = "";
        cin >> tik;
        getline(cin, s);
        getline(cin, s);
        cin >> k;

        //cout<< tik << "!"<<s<<"!"<<k<<endl;
        int mod = s.length();
        int cur = 0;
        //for(int i=0;i<k;i++)
        while(k--)
        {
            int a;
            cin >> a;
            while(a < 0)
                a += mod;
            cur += a;
            if(cur >= mod)
                cur %= mod;
            ans += s[cur];
        }
        cout << tik << " " << ans << endl;
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
    //string cur; int t; cin >> t; getline(cin,cur); while (t--) solve();

    return 0;
}