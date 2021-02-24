//https://www.e-olymp.com/ru/problems/1215
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(0);

    set<pair<char, char>> sets =
    {
        {'R', 'S'},
        {'P', 'R'},
        {'S', 'P'},
        {'S', 'S'},
        {'P', 'P'},
        {'R', 'R'}
    };

    int n;
    cin >> n;
    int p1 = 0, p2 = 0;
    for (int i = 0; i < n; i++)
    {
        char ch1, ch2;

        cin >> ch1 >> ch2;
        //cout << ch1 << "-" << ch2 << endl;
        if (ch1 == ch2)
            p1++, p2++;
        else
        {
            p1 += (sets.count({ ch1, ch2 }) ? 1 : 0);
            p2 += (sets.count({ ch2, ch1 }) ? 1 : 0);
        }
    }

    if (p1 == p2)
        cout << "TIE" << endl;
    else
        cout << (p1 > p2 ? "Player 1" : "Player 2") << endl;

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    //solve();
    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}