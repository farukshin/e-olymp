//https://www.e-olymp.com/ru/problems/34
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> winner(m + 1);
    for (int i = 1; i <= m; i++)
        cin >> winner[i];

    vector<vector<vector<int>>> ss(n + 1);
    for (int i = 0; i < k; i++)
    {
        int a, b, t;
        cin >> a >> b >> t;
        ss[a].push_back({b, t});
        ss[b].push_back({a, t});
    }

    int start;
    cin >> start;

    vector<int> count(n + 1, -1);
    count[start] = 0;

    queue<int> bfs;
    bfs.push(start);
    while (!bfs.empty())
    {
        start = bfs.front();
        bfs.pop();
        for (auto next : ss[start])
            if (count[next[0]] == -1 || count[next[0]] > count[start] + next[1])
            {
                bfs.push(next[0]);
                count[next[0]] = count[start] + next[1];
            }
    }
    bool success = true;
    int asn = 0;
    for (int i = 1; i <= m && success; i++)
    {
        if (count[winner[i]] == -1)
            success = false;

        asn = max(count[winner[i]], asn);
    }
    if (success)
        cout << "The good sponsor!" << endl
             << asn;
    else
        cout << "It is not fault of sponsor...";
}

int main()
{
    ios_b;
#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif
    solve();
    return 0;
}
