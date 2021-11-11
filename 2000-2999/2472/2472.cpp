// https://www.e-olymp.com/ru/problems/2472
#include <cstdio>
#include <queue>
using namespace std;
typedef long long ll;

void solve()
{
    int n, k;
    scanf("%d\n %d\n", &n, &k);

    vector<int> cnt(n, 0);
    queue<pair<int, pair<int, int>>> q;

    pair<int, pair<int, int>> cur;
    for (int i = 0; i < k; i++)
    {
        int t, a, b;
        scanf("%d", &t);
        cur.first = t;
        if (t == 1)
        {
            scanf("%d %d\n", &a, &b);
            --a, --b;
            cur.second.first = a;
            cur.second.second = b;
        }
        else if (t == 2)
        {
            scanf("%d\n", &a);
            --a;
            cur.second.first = a;
            cnt[a]++;
        }
        q.push(cur);
    }

    vector<vector<int>> ss(n);
    int i = -1;
    while (!q.empty())
    {
        auto cc = q.front();
        q.pop();
        i++;
        int t = cc.first;
        int a = cc.second.first;
        int b = cc.second.second;

        if (t == 1 && cnt[a] == 0 && cnt[b] == 0)
            continue;

        if (t == 1)
        {
            if (cnt[a])
                ss[a].push_back(b);
            if (cnt[b])
                ss[b].push_back(a);
        }
        else if (t == 2)
        {
            for (auto d : ss[a])
                printf("%d ", d + 1);
            printf("\n");
            cnt[a]--;
            if (cnt[a] == 0)
                ss[a].clear();
        }
    }
}

int main()
{
    solve();
    return 0;
}
