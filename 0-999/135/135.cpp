// https://www.e-olymp.com/ru/problems/135
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void da_read(const string& s, vector<int>& a)
{
    for (int i = (int)s.length(); i > 0; i -= 9)
        if (i < 9)
            a.push_back(atoi(s.substr(0, i).c_str()));
        else
            a.push_back(atoi(s.substr(i - 9, 9).c_str()));
    while (a.size() > 1 && a.back() == 0)
        a.pop_back();
}

void da_umnogh_small(vector<int> &a, int &b)
{
    int carry = 0;
    const int base = 1000 * 1000 * 1000;
    for (size_t i = 0; i < a.size() || carry; ++i)
    {
        if (i == a.size())
            a.push_back(0);
        long long cur = carry + a[i] * 1ll * b;
        a[i] = int(cur % base);
        carry = int(cur / base);
    }
    while (a.size() > 1 && a.back() == 0)
        a.pop_back();
}

void da_print(vector<int>& a)
{
    printf("%d", a.empty() ? 0 : a.back());
    for (int i = (int)a.size() - 2; i >= 0; --i)
        printf("%09d", a[i]);
    //cout << endl;
}

int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
        {
            int gc = gcd(v[i], v[j]);
            v[j] /= gc;
        }

    vector<int> ans;
    string s = "1";
    da_read(s, ans);
    for(int i = 0; i < n; i++)
        da_umnogh_small(ans, v[i]);
    da_print(ans);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}