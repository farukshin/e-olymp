// https://www.e-olymp.com/ru/problems/1428
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int n, q, cnt {0};
map<string, int> students;

vector<int> parent;
vector<int> rang;

void make_set (int v)
{
    parent[v] = v;
    rang[v] = 0;
}

void init (int n)
{
    parent.resize(n);
    rang.resize(n);
    for(int i = 0; i < n; i++)
        make_set(i);
}

int find_set (int v)
{
    if (v == parent[v])
        return v;
    return parent[v] = find_set (parent[v]);
}

void union_sets (int a, int b)
{
    a = find_set (a);
    b = find_set (b);
    if (a != b)
    {
        if (rang[a] < rang[b])
            swap (a, b);

        if(a < n)
            parent[b] = a;
        else
            parent[a] = b;

        if (rang[a] == rang[b])
            ++rang[a];
    }
}

void solve()
{
    cin >> n;

    for(int i = 0; i < n; ++i)
    {
        string student;
        cin >> student;
        if(students.count(student))
        {
            cout << "Error";
            return;
        }
        students.insert({student, cnt++});
    }

    cin >> q;
    vector<pair<string, string>> requests(q);
    for(int i = 0; i < q; i++)
    {
        cin >> requests[i].first >> requests[i].second;
        if(!students.count(requests[i].first))
            students.insert({requests[i].first, cnt++});

        if(!students.count(requests[i].second))
            students.insert({requests[i].second, cnt++});
    }

    init(cnt);

    for(auto &[student1, student2] : requests)
    {
        auto leader1 = find_set(students[student1]);
        auto leader2 = find_set(students[student2]);
        if(leader1 < n && leader2 < n && leader1 != leader2)
        {
            cout << "Error";
            return;
        }

        if(leader1 != leader2)
            union_sets(students[student1], students[student2]);
    }

    for(auto &[student, sec] : students)
    {
        auto leader = find_set(students[student]);
        cout << student << " " << (leader < n ? leader + 1 : 0) << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}