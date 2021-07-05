// https://www.e-olymp.com/ru/problems/6253
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int MAXARR = 100001;
    string b, a;
    cin >> b >> a;
    int s = 0, lb = b.length(), la = a.length(), curB = lb, curA = la;

    while(b[s] && b[s] == a[s])
        s++;

    while(curB >= 0 && curA >= 0 && b[curB] == a[curA])
        --curB, --curA;

    cout << max(max(0, la - lb), curA - s + 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}