// https://www.e-olymp.com/ru/problems/2245
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void eratosfen(int &n, vector<bool> &prime)
{
    prime.resize(n + 1);
    fill(prime.begin(), prime.end(), true);

    prime[0] = prime[1] = false;
    for (int i = 2; i <= n; ++i)
        if (prime[i])
            if (i * 1ll * i <= n)
                for (int j = i * i; j <= n; j += i)
                    prime[j] = false;
}

void solve()
{
    int a, b;
    cin >> a >> b;

    vector<bool> prime;
    eratosfen(b, prime);

    vector<int> ans;
    for(int i = 0; i <= b; i++)
        if(prime[i] && i >= 2 && i <= b)
            ans.push_back(i);

    set<int> st;
    for(int i = 0; i < ans.size(); i++)
        for(int j = i; j < ans.size(); j++)
            st.insert(ans[i] + ans[j]);

    for(auto d : st)
        if(d >= a && d <= b)
            cout << d << " ";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}