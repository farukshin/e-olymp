//https://www.e-olymp.com/ru/problems/834
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

void da_plus(vector<int>& a, vector<int>& b)
{
    int carry = 0;
    const int base = 1000 * 1000 * 1000;
    for (size_t i = 0; i < max(a.size(), b.size()) || carry; ++i)
    {
        if (i == a.size())
            a.push_back(0);
        a[i] += carry + (i < b.size() ? b[i] : 0);
        carry = a[i] >= base;
        if (carry)  a[i] -= base;
    }
}

void da_minus(vector<int>& a, vector<int>& b)
{
    int carry = 0;
    const int base = 1000 * 1000 * 1000;
    for (size_t i = 0; i < b.size() || carry; ++i)
    {
        a[i] -= carry + (i < b.size() ? b[i] : 0);
        carry = a[i] < 0;
        if (carry)  a[i] += base;
    }
    while (a.size() > 1 && a.back() == 0)
        a.pop_back();
}

void da_umnogh(vector<int> &a, vector<int> &b, vector<int> &c)
{
    int carry = 0;
    const int base = 1000 * 1000 * 1000;
    c.resize(a.size() + b.size());
    for (size_t i = 0; i < a.size(); ++i)
        for (int j = 0, carry = 0; j < (int)b.size() || carry; ++j)
        {
            long long cur = c[i + j] + a[i] * 1ll * (j < (int)b.size() ? b[j] : 0) + carry;
            c[i + j] = int(cur % base);
            carry = int(cur / base);
        }
    while (c.size() > 1 && c.back() == 0)
        c.pop_back();
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

void da_delen_small(vector<int> &a, int &b, int & carry)
{
    carry = 0;
    const int base = 1000 * 1000 * 1000;
    for (int i = (int)a.size() - 1; i >= 0; --i)
    {
        long long cur = a[i] + carry * 1ll * base;
        a[i] = int (cur / b);
        carry = int (cur % b);
    }
    while (a.size() > 1 && a.back() == 0)
        a.pop_back();
}

bool da_ravno(vector<int>& a, vector<int>& b)
{
    if(a.size() != b.size())
        return false;
    bool success = true;
    for(int i = 0; i < a.size() && success; i++)
        if(a[i] != b[i])
            success = false;
    return success;
}

void da_print(vector<int>& a)
{
    printf("%d", a.empty() ? 0 : a.back());
    for (int i = (int)a.size() - 2; i >= 0; --i)
        printf("%09d", a[i]);
    printf("\n");
}

void da_binpow (int x, int n, vector<int> & res)
{
    vector<int> a;
    string sa = to_string(x);
    da_read(sa, a);

    while (n)
        if (n & 1)
        {
            vector<int> curRes;
            da_umnogh(res, a, curRes);
            res = curRes;
            --n;
        }
        else
        {
            vector<int> curRes;
            da_umnogh(a, a, curRes);
            a = curRes;
            n >>= 1;
        }
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(9);

    int aa, n;
    cin >> aa >> n;
    vector<int> res;
    string s = "1";
    da_read(s, res);

    da_binpow(aa, n, res);

    da_print(res);

}

int main()
{
    //ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}