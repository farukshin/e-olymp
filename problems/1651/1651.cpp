// https://www.e-olymp.com/ru/problems/1651
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

//#define INT_SIZE 32
#define LLONG_SIZE 64

struct TrieNode
{
    ll value;
    TrieNode *arr[2];
};

TrieNode *newNode()
{
    TrieNode *temp = new TrieNode;
    temp->value = 0;
    temp->arr[0] = temp->arr[1] = NULL;
    return temp;
}

void insert(TrieNode *root, ll pre_xor)
{
    TrieNode *temp = root;

    for (int i = LLONG_SIZE - 1; i >= 0; i--)
    {
        bool val = pre_xor & (ll(1) << i);

        if (temp->arr[val] == NULL)
            temp->arr[val] = newNode();

        temp = temp->arr[val];
    }

    temp->value = pre_xor;
}

ll query(TrieNode *root, ll pre_xor)
{
    TrieNode *temp = root;
    for (int i = LLONG_SIZE - 1; i >= 0; i--)
    {
        bool val = pre_xor & (ll(1) << i);

        if (temp->arr[1 - val] != NULL)
            temp = temp->arr[1 - val];

        else if (temp->arr[val] != NULL)
            temp = temp->arr[val];
    }
    return temp->value;
}

void maxSubarrayXOR(vector<ll> &arr, ll & n, ll & q)
{
    TrieNode *root = newNode();
    //insert(root, 0);

    for (ll i = 0; i < n; i++)
        insert(root, arr[i]);

    for (ll i = 0; i < q; i++)
    {
        ll x;
        cin >> x;
        ll curRes = query(root, x);
        cout << curRes << "\n";
    }
}


void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> arr(n) ;
    for(ll i = 0; i < n; i++)
        cin >> arr[i];

    maxSubarrayXOR(arr, n, q);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}