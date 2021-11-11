// https://www.e-olymp.com/ru/problems/8290
#include <cstdio>
#include <set>
using namespace std;
typedef long long ll;

void solve()
{
    pair<int, int> p;
    scanf("%d %d", &p.first, &p.second);
    set<pair<int, int>> st;
    st.insert(p);
    int ans = 0;
    while (true)
    {
        if (p.first == p.second)
            break;
        if (p.first > p.second)
            p.first -= p.second, p.second *= 2;
        else
            p.second -= p.first, p.first *= 2;
        ans++;
        if (st.count(p))
            break;
    }
    if (p.first == p.second)
        printf("%d", ans);
    else
        printf("-1");
}

int main()
{
    solve();
    return 0;
}
