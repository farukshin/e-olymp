//https://www.e-olymp.com/ru/problems/2941
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

void build(int tree[], int arr[], int v, int left, int right)
{
    if (left != right)
    {
        int middle = (left + right) / 2;
        build(tree, arr, v * 2, left, middle);
        build(tree, arr, v * 2 + 1, middle + 1, right);
        tree[v] = tree[v * 2] + tree[v * 2 + 1];
    }
    else
        tree[v] = arr[left];
}

int sum(int tree[], int v, int left, int right, int from, int to)
{
    if (from > to)
        return 0;
    if (from == left && to == right)
        return tree[v];
    int middle = (left + right) / 2;
    return sum(tree, v * 2, left, middle, from, min(to, middle)) + sum(tree, v * 2 + 1, middle + 1, right, max(from, middle + 1), to);
}

void update(int tree[], int v, int left, int right, int index, int new_val)
{
    if (left != right)
    {
        int middle = (left + right) / 2;
        if (index <= middle)
            update(tree, v * 2, left, middle, index, new_val);
        else
            update(tree, v * 2 + 1, middle + 1, right, index, new_val);
        tree[v] = tree[v * 2] + tree[v * 2 + 1];
    }
    else
        tree[v] = new_val;
}
void solve()
{
    int n, q;
    cin >> n >> q;

    int size = 2 * n;
    int arr[n], tree[size];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    build(tree, arr, 1, 0, n - 1);

    for (q; q > 0; q--)
    {
        char query;
        cin >> query;
        if (query == '=')
        {
            int i, d;
            cin >> i >> d;
            update(tree, 1, 0, n - 1, i - 1, d);
        }
        else if (query == '?')
        {
            int from, to;
            cin >> from >> to;
            cout << sum(tree, 1, 0, n - 1, from - 1, to - 1) << endl;
        }
    }
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
