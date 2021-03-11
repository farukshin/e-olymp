//https://www.e-olymp.com/ru/problems/8671
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

    set<int> ans;
    for(int i = 1; i < n; i++)
    {
        if(i * i > n)
            break;
        int i2 = i * i;
        for(int j = i + 1; j < n; j++)
        {
            int j2 = j * j;
            if(j2 > n || i2 + j2 > n)
                break;
            ans.insert(i2 + j2);
        }
    }

    for(auto s : ans)
        cout << s << " ";
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