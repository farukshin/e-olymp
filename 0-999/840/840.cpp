//https://www.e-olymp.com/ru/problems/840
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
    for (size_t i = 0; i < max(a.size(), b.size()) || carry; ++i) {
        if (i == a.size())
            a.push_back(0);
        a[i] += carry + (i < b.size() ? b[i] : 0);
        carry = a[i] >= base;
        if (carry)  a[i] -= base;
    }
}
void da_print(vector<int>& a)
{
    printf("%d", a.empty() ? 0 : a.back());
    for (int i = (int)a.size() - 2; i >= 0; --i)
        printf("%09d", a[i]);
    //cout << endl;
}
void solve()
{
    //cout.setf(std::ios::fixed);
    //cout.precision(4);

	string s1,s2;
	cin>>s1>>s2;
	
	vector<int> a,b;
	da_read(s1,a);
	da_read(s2,b);
	da_plus(a,b);
	da_print(a);
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