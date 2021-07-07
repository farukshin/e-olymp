// https://www.e-olymp.com/ru/problems/1588
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

struct myStack
{
    myStack* next = NULL;
    int n;
    myStack () { ; };
};

void solve()
{
    int n, k, p;
    cin >> n >> k >> p;
    vector<myStack *> v;
    for(int i = 0; i < k; i++)
    {
        myStack * root = new myStack();
        root->next = NULL;
        v.push_back(root);
    }

    bool error = false;
    int ans = 0, curAns = 0;

    for(int i = 0; i < n && !error; i++)
    {
        char ch;
        int a, b;
        cin >> ch >> a >> b;
        --a;
        if(ch == '+')
        {
            myStack * curNode = new myStack();
            curNode->n = b;
            curNode->next = v[a];
            v[a] = curNode;
            curAns++;
        }
        else if(ch == '-' && v[a]->next != NULL && v[a]->n == b)
        {
            v[a] = v[a]->next;
            curAns--;
        }
        else if(ch == '-')
            error = true;

        ans = max(ans, curAns);
        error = error || curAns > p;
    }
    if(error || curAns)
        cout << "Error";
    else
        cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}