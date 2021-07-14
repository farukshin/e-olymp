// https://www.e-olymp.com/ru/problems/7230
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const int MAXARR = 100000;
vector<int> prime;
priority_queue<pair<int, pair<int, int>>> q;

void d()
{
    const int N = 1000000;
    int lp[N + 1];

    for (int i = 2; i <= N; ++i)
    {
        if (lp[i] == 0)
        {
            lp[i] = i;
            prime.push_back (i);
        }
        for (int j = 0; j < (int)prime.size() && prime[j] <= lp[i] && i * prime[j] <= N; ++j)
            lp[i * prime[j]] = prime[j];
    }
}

int n;

void solve()
{

    cin >> n;
    d();

    int lim = prime.size();

    for(int i = 0; i < lim; i++)
    {
        if(q.size() == n && q.top().first < prime[i]*prime[0])
            break;

        for(int j = 0; j <= i; j++)
            if(q.size() == n && q.top().first < prime[i]*prime[j])
                break;
            else
            {
                q.push({prime[i]*prime[j], {prime[j], prime[i]}});
                while(q.size() > n)
                    q.pop();
            }
    }

    cout << q.top().first << " " << q.top().second.first << " " << q.top().second.second;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}