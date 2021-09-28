// https://www.e-olymp.com/ru/problems/10652
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
    bool unic = true;

    void topo()
    {
        for (int i = 0; i < n; i++)
            if (InDegree[i] == 0) minHeap.insert(i);

        while (!minHeap.empty())
        {
            if (minHeap.size() > 1) unic = false;
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

    bool getUnic()
    {
        return unic;
    }

    vector<int> getTopologicSort()
    {
        return Order;
    }

};

void solve()
{
    int n, m;
    cin >> n >> m;
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
    else cout << (kahn.getUnic() ? "YES" : "NO");
}

int main()
{
    solve();
    return 0;
}
