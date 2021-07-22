// https://www.e-olymp.com/ru/problems/2249
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

map<int, ll> ans;
set<int> st;
map<int, int> mp;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i], st.insert(v[i]), mp[v[i]]++;

    for(auto d : v)
    {
        if(ans.count(d))
        {
            cout << ans[d] << "\n";
            continue;
        }

        ll res = 0;
        for(auto dd : st)
        {
            if(dd >= d)
                break;
            int num = dd;
            int num2 = d - num;

            if(st.count(num2) == 0 || num2 < num)
                continue;

            if(num == num2 && mp[num] >= 2)
                //res+= (mp[num]-1) * (mp[num2]-1);
                res += (mp[num] - 1) * mp[num] / 2;
            else if(num != num2)
                res += mp[num] * mp[num2];
        }
        ans[d] = res;
        cout << res << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(5);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}