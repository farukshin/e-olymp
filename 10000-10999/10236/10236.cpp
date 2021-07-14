// https://www.e-olymp.com/ru/problems/10236
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

ll ans = 0;

int n;
bool h[100] = {false}, diag_add[100] = {false}, diag_sub[100] = {false};
vector<int> d(100);
bool success = false;

void backTraking(int pos)
{
    if(pos == n)
    {
        //ans++;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
                cout << (d[j] == i ? 1 : 0) << " ";
            cout << "\n";
        }

        // for(int i=0;i<n;i++)
        // 	cout<<d[i]<<" ";
        // cout<<"\n";
        success = true;
        return;
    }

    for(int i = 0; i < n; i++)
        if(!h[i] && !diag_add[pos + i] && !diag_sub[pos - i + n])
        {
            d[pos] = i;
            h[i] = true;
            diag_add[pos + i] = true;
            diag_sub[pos - i + n] = true;
            backTraking(pos + 1);
            if(success)
                return;
            d[pos] = 0;
            h[i] = false;
            diag_add[pos + i] = false;
            diag_sub[pos - i + n] = false;
        }
}

void solve()
{
    cin >> n;
    backTraking(0);

    if(!ans)
        cout << "Not possible";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(1);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}