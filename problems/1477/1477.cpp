//https://www.e-olymp.com/ru/problems/1477
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

void solve()
{

    int n;
    cin >> n;

    multimap<double, int> multimap;

    for (int i = 1; i <= n; i++)
    {
        int cur;
        cin >> cur;
        multimap.insert({cur, i});
    }

    while (multimap.size() != 1)
    {
        auto m1 = *multimap.begin();
        multimap.erase(multimap.begin());

        auto m2 = *multimap.begin();
        multimap.erase(multimap.begin());

        cout << m1.second << " " << m2.second << endl;
        multimap.insert({(m1.first + m2.first) / 2, ++n});
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
