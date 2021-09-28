// https://www.e-olymp.com/ru/problems/10235
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

class Kahn
{
private:
    int n, m;
    vector<vector<int>> ss;
    vector<int> InDegree, Order;
    set<int> minHeap;

    void topo()
    {
        for (int i = 0; i < n; i++)
            if (InDegree[i] == 0) minHeap.insert(i);

        while (!minHeap.empty())
        {
            auto node = *minHeap.begin();
            minHeap.erase(minHeap.begin());
            Order.push_back(node);
            for (auto chield : ss[node])
            {
                InDegree[chield]--;
                if (InDegree[chield] == 0)
                    minHeap.insert(chield);
            }
        }
    }

public:
    Kahn(int _n, int _m)
    {
        n = _n, m = _m, ss.resize(n), InDegree.resize(n, 0);
    };

    void addEdge(int a, int b)
    {
        ss[a].push_back(b);
        InDegree[b]++;
    }

    bool calc()
    {
        topo();
        return (Order.size()) == n;
    }

    vector<int> getTopologicSort()
    {
        return Order;
    }

};

void solve()
{
    int n, m;
    while(cin >> n >> m)
    {
        if(n == 0 && m == 0) break;
        Kahn kahn(n, m);
        for(int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            --a, --b;
            kahn.addEdge(a, b);
        }

        if(!kahn.calc())
            cout << -1;

        auto res = kahn.getTopologicSort();
        for(auto d : res)
            cout << d + 1 << " ";
        cout << "\n";
    }
}

int main()
{
    solve();
    return 0;
}
