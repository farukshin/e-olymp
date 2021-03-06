//https://www.e-olymp.com/ru/problems/506
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    string s;
    //fgets(comment, sizeof comment, stdin);

    while(getline(cin, s))
        //while(scanf("%[^\n]", s))
    {
        //bool success = false, komment = false;
        string cur = "";
        for(int i = 0; i < s.size(); i++)
        {
            if(i == s.size() - 1)
            {
                cur += s[i];
                continue;
            }

            if(s[i] == '-' && s[i + 1] == '>')
                cur += '.', i++;
            else if(s[i] == '/' && s[i + 1] == '/')
                cur += s.substr(i), i = s.size();
            else
                cur += s[i];
        }
        //printf("%s\n", s);
        cout << cur << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t;cin >> t;while (t--)solve();

    return 0;
}