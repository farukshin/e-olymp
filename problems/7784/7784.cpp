//https://www.e-olymp.com/ru/problems/7784
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    vector<pair<int, int>> v(3);
    v[0] = {a, 1};
    v[1] = {b, 2};
    v[2] = {c, 3};

    if(v[0].first > v[1].first) swap(v[0], v[1]);
    if(v[0].first > v[2].first) swap(v[0], v[2]);
    if(v[1].first > v[2].first) swap(v[1], v[2]);


    int sum = a + b + c;
    int dolya = sum / 2;
    if (dolya == a + b || dolya == b + c || dolya == a + c)
    {
        cout << 0;
        return;
    }
    else if(sum % 2 != 0 || sum % 2 == 0 && v[1].first > dolya && v[2].first > dolya)
    {
        cout << -1;
        return;
    }

    if(v[2].first < dolya)
        cout << v[2].second << "\n" << dolya - v[1].first << " " << (v[2].first - dolya + v[1].first);
    else if(v[2].first > dolya)
        cout << v[2].second << "\n" << dolya << " " << v[2].first - dolya;


}

int main()
{
    //cout.setf(std::ios::fixed); cout.precision(6);
    solve();
    return 0;
}