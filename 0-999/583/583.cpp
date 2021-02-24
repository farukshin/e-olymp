//https://www.e-olymp.com/ru/problems/583
//#tech_debt
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

struct TimeF
{
    int hour;
    int minute;
};

TimeF raznost(TimeF t1, TimeF t2)
{
    TimeF res;
    res.h = t1.h - t2.h;
    res.m = t1.m - t2.m;
    return res;
}

TimeF summa(TimeF t1, tm t2)
{
    TimeF res;
    res.h = t1.h + t2.h;
    res.m = t1.m + t2.m;
    return res;
}

TimeF delen(TimeF t1, int n)
{
    TimeF res;
    res.h = t1.h / n;
    res.m = t1.m / n;
    return res;
}

TimeF toTm(string s)
{
    TimeF res;
    res.h = s[0] + s[1];
    res.m = s[3] + s[4];
    return res;
}

string toStr(TimeF t)
{
    string str;
    str = to_string(t.h) + ':' + to_string(t.m);
    return str;
}

void solve()
{
    string s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    TimeF t1 = toTm(s1), t2 = toTm(s2), t3 = toTm(s3), t4 = toTm(s4);

    cout << toStr(delen(summa(raznost(t2, t1), raznost(t4, t3)), 2)) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}
