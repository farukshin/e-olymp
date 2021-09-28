// https://www.e-olymp.com/ru/problems/4851
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
    Kahn(int _n)
    {
        n = _n, ss.resize(n), InDegree.resize(n, 0);
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
    string s;

    getline (cin, s);
    stringstream io(s);
    int cur;
    vector<int> v;
    while(io >> cur)
        v.push_back(cur);
    int n = v.size();
    Kahn kahn(n);
    vector<vector<int>> gr(n);
    for(int i = 0; i < n; i++)
    {
        getline(cin, s);
        stringstream io2(s);
        while(io2 >> cur)
            kahn.addEdge(--cur, i), gr[i].push_back(cur);
    }
    if(!kahn.calc())
    {
        cout << -1;
        return;
    }

    bool used[n] = {false};
    used[0] = true;
    queue<int> q;
    q.push(0);
    while(!q.empty())
    {
        auto node = q.front();
        q.pop();
        for(auto chield : gr[node])
            if(!used[chield])
                used[chield] = true, q.push(chield);
    }


    auto res = kahn.getTopologicSort();
    ll ans = 0;
    for(auto d : res)
    {
        ans += (used[d] ? v[d] : 0);
        if(d == 0)
            break;
    }
    cout << ans;
}

int main()
{
    solve();
    return 0;
}
