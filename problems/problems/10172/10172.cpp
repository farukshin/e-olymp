//https://www.e-olymp.com/ru/problems/10172
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void Floyd_Warshall(vector<vector<int>>& ms, int& countNode)
{
    for (int k = 0; k < countNode; ++k)
        for (int i = 0; i < countNode; ++i)
            for (int j = 0; j < countNode; ++j)
                if (ms[i][k] < INT_MAX && ms[k][j] < INT_MAX)
                    ms[i][j] = min(ms[i][j], ms[i][k] + ms[k][j]);
}

void solve()
{
    int n, cur, b;

    while(cin >> n, n > 0)
    {
        vector<vector<int>> ms(n, vector<int>(n, INT_MAX));
        while(cin >> cur, cur > 0)
        {
            --cur;
            while(cin >> b, b > 0)
                --b, ms[cur][b] = 1;

        }
        Floyd_Warshall(ms, n);

        int k;
        cin >> k;
        vector<int> v(k);
        for(int i = 0; i < k; i++)
            cin >> v[i], v[i]--;

        // for(int i=0;i<n;i++)
        // {
        // 	for(int j=0;j<n;j++)
        // 		cout<<ms[i][j]<<" ";
        // 	cout<<"\n";
        // }

        for(int i = 0; i < k; i++)
        {
            int start = v[i];
            set<int> ans;
            for(int j = 0; j < n; j++)
                if(ms[start][j] == INT_MAX)
                    ans.insert(j);
            cout << ans.size() << " ";
            for(auto d : ans)
                cout << d + 1 << " ";
            cout << "\n";
        }

    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(1);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}