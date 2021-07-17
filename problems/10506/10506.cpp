//https://www.e-olymp.com/ru/problems/10506
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void bfs_compSv(vector<vector<int>>& ss, const int countNode, vector<int>& compSv, int& countCompSv)
{
    vector<bool> used(countNode, false);
    compSv.resize(countNode);
    fill(compSv.begin(), compSv.end(), 0);
    countCompSv = 0;

    for (int i = 0; i < countNode; i++)
        if (!used[i])
        {
            countCompSv++;
            queue<int> q;
            q.push(i);
            used[i] = true;

            while (!q.empty())
            {
                auto cur = q.front();
                q.pop();
                compSv[cur] = countCompSv;

                for (auto chield : ss[cur])
                    if (!used[chield])
                    {
                        used[chield] = true;
                        q.push(chield);
                    }
            }
        }
}

void solve()
{
    int n;
    cin >> n;

    vector<vector<int>> ss(n);
    string s;
    getline(cin, s);

    for(int i = 0; i < n; i++)
    {
        getline(cin, s);
        istringstream io(s);
        int k;
        io >> k;
        for(int j = 0; j < k; j++)
        {
            int a;
            io >> a;
            --a;
            ss[a].push_back(i);
            ss[i].push_back(a);
        }
    }

    vector<int> compSv;
    int countCompSv;
    bfs_compSv(ss, n, compSv, countCompSv);
    cout << countCompSv;
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