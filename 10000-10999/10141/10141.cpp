// https://www.e-olymp.com/ru/problems/10141
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

bool mySort(pair<int, int> p1, pair<int, int> p2)
{
    if(p1.first != p2.first)
        return p1.first < p2.first;
    return p1.second > p2.second;
}

int check(int n)
{
    int res = 0;
    while(n)
        res += n % 10, n /= 10;
    return res;
}

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i].second, v[i].first = check(v[i].second);

    sort(v.begin(), v.end(), mySort);
    for(int i = 0; i < n; i++)
        cout << v[i].second << " ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    solve();
    return 0;
}