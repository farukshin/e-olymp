//https://www.e-olymp.com/ru/problems/6368
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;


int sm(int n)
{
    int res = 0;
    while(n)
        res += (n % 10) * (n % 10), n /= 10;
    return res;
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    int n;
    cin >> n;
    set<int> st;

    while(true)
    {
        int s = sm(n);

        if(s == 1)
        {
            cout << "HAPPY" << endl;
            break;
        }
        else if(st.count(s) > 0)
        {
            cout << "SAD" << endl;
            break;
        }
        else
            st.insert(s), n = s;
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