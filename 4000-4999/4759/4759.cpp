//https://www.e-olymp.com/ru/problems/4759
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void print(vector<ll> ans)
{
    if (ans.size() == 0)
        cout << "[]" << endl;

    for (int i = 0; i < ans.size(); i++)
    {
        if (i == 0)
            cout << "[";
        cout << ans[i] << (i == ans.size() - 1 ? "]\n" : ", ");
    }
}

void solve()
{
    vector<ll> arr;
    ll cur;
    while (cin >> cur)
        arr.push_back(cur);

    vector<ll> ans;
    int n = arr.size();

    ans.clear();
    for (int i = 0; i < n; i++)
        ans.push_back(arr[i] * arr[i]);
    print(ans);

    ans.clear();
    for (int i = 0; i < n; i++)
        ans.push_back(arr[i] % 11);
    print(ans);

    ans.clear();
    for (int i = 0; i < n; i++)
        if (arr[i] % 2 == 0)
            ans.push_back(arr[i]);
    print(ans);



    ans.clear();
    for (int i = 0; i < n; i++)
        if (arr[i] >= 0 && to_string(arr[i]).length() % 2 == 1 || arr[i] < 0 && to_string(arr[i]).length() % 2 == 0)
            ans.push_back(arr[i]);
    print(ans);


    ans.clear();
    for (int i = 0; i < n; i++)
        if (arr[i] > 9 && arr[i] < 100 || arr[i] < -9 && arr[i] > -100)
            ans.push_back(arr[i] * 100 + arr[i]);
    print(ans);

    ans.clear();
    for (int i = 0; i < n; i++)
        if (i % 3 != 0)
            ans.push_back(arr[i]);
    print(ans);

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}
