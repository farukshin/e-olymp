// https://www.e-olymp.com/ru/problems/7358
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int sm(int n)
{
    int ans = 0;
    while(n)
    {
        ans += n % 10;
        n /= 10;
    }
    return ans;
}

void solve()
{
    ll n;
    cin >> n;
    if(n < 10)
    {
        cout << n;
        return;
    }

    set<pair<int, ll>> st;
    st.insert({sm(n), n});
    //cout<<n<<" ";

    string s = to_string(n);
    ll n2 = stoi(string(s.length() - 1, '9'));
    //cout<<n2<<" ";
    st.insert({sm(n2), n2});

    for(int i = 0; i < s.length(); i++)
    {
        string cur = s;
        if(cur[i] == '0') continue;

        cur[i] -= 1;
        for(int j = i + 1; j < s.length(); j++)
            cur[j] = '9';
        ll curN = stoi(cur);
        //cout<<curN<<" ";
        st.insert({sm(curN), curN});

    }

    auto it = st.end();
    --it;
    cout << (*it).second;
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