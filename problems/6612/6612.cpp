//https://www.e-olymp.com/ru/problems/6612
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    //cout.setf(std::ios::fixed);
    //cout.precision(6);

    string s = "", cur;
    int n = 0;
    char endTik = ';';
    while(getline(cin, cur))
    {
        n++;
        if(cur == "END OF CASE")
            break;
        vector<int> v;
        int sizeS = s.size();

        for(int i = 0; i < cur.size(); i++)
            if(cur[i] == endTik)
                v.push_back(i + sizeS);

        s += cur;
        if(v.size() == 0)
            continue;

        int pre = -1;
        for(auto d : v)
        {
            //printf("%d: %s\n", n, s.substr(pre, d-pre));
            cout << n << ": " << s.substr(pre + 1, d - pre) << endl;
            pre = d;
        }
        s = s.substr(pre + 1);
    }

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    //solve();
    string cur;
    int t;
    cin >> t;
    getline(cin, cur);
    while (t--) solve();

    return 0;
}