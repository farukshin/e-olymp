//https://www.e-olymp.com/ru/problems/8352
#include <bits/stdc++.h>
using namespace std;
long long orta, cavab, a, b, c, d;
int main()
{
    cin >> a >> b >> c;
    orta = (a + b + c) / 3;
    cavab = (abs(a - orta) + abs(b - orta) + abs(c - orta)) / 2;
    if((a + b + c) % 3 != 0) cout << "IMPOSSIBLE";
    else cout << cavab;
    return 0;
}