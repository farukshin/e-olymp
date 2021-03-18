//https://www.e-olymp.com/ru/problems/4768
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

ld d(pair<int, int> A, pair<int, int>B)
{
    ld res = sqrt((B.first - A.first) * (B.first - A.first) + (B.second - A.second) * (B.second - A.second));
    return res;
}

void solve()
{
    pair<int, int> A, B, C;
    cin >> A.first >> A.second;
    cin >> B.first >> B.second;
    cin >> C.first >> C.second;

    ld a = d(A, B);
    ld b = d(B, C);
    ld c = d(A, C);

    if(a > b) swap(a, b);
    if(a > c) swap(a, c);
    if(b > c) swap(b, c);

    ld ans = acosl((a * a + b * b - c * c) / (2 * a * b)) * (180 / M_PI);
    cout << ans;

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    cout.setf(std::ios::fixed);
    cout.precision(6);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}