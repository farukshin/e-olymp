// https://www.e-olymp.com/ru/problems/3741
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

//#define INT_SIZE 32
#define LLONG_SIZE 64

struct TrieNode
{
    ll value;
    ll ind;
    TrieNode *arr[2];
};

TrieNode *newNode()
{
    TrieNode *temp = new TrieNode;
    temp->value = 0;
    temp->arr[0] = temp->arr[1] = NULL;
    return temp;
}

void insert(TrieNode *root, ll pre_xor, ll l = -1)
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
    temp->ind = l;
}

ll query(TrieNode *root, ll pre_xor, ll & l)
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
    l = temp->ind;
    return pre_xor ^ (temp->value);
}

void maxSubarrayXOR(vector<ll> &arr, ll & n, ll &ans, ll &l, ll &r)
{
    TrieNode *root = newNode();
    insert(root, 0);

    ll pre_xor = 0;

    for (ll i = 0; i < n; i++)
    {
        pre_xor = pre_xor ^ arr[i];
        insert(root, pre_xor, i);
        ll curL = -1;
        ll curRes = query(root, pre_xor, curL);
        if(ans < curRes)
            ans = curRes, l = curL, r = i;
    }
}


void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n) ;
    for(ll i = 0; i < n; i++)
        cin >> arr[i];
    ll ans = LLONG_MIN;
    ll l = -1, r = -1;
    maxSubarrayXOR(arr, n, ans, l, r);
    cout << l + 2 << " " << r + 1 << " " << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}