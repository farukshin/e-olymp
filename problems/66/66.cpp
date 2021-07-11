//https://www.e-olymp.com/ru/problems/66
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{

    int n;
    scanf("%d", &n);

    vector<pair<int, int>> v;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int a, b, c, d;
        scanf("%d:%d %d:%d", &a, &b, &c, &d);
        //printf("%d %d %d %d\n", a, b, c, d);
        v.push_back({c * 60 + d, a * 60 + b});
    }

    sort(v.begin(), v.end());

    int preKon = -1;
    for (int i = 0; i < n; i++)
        if(v[i].second >= preKon)
            ans++, preKon = v[i].first;

    cout << ans;
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