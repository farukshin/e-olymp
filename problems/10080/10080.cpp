// https://www.e-olymp.com/ru/problems/10080
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void spiral(vector<vector<int>> & v, int n, int m, pair<int, int> pos, char step, bool po4asovoj = true)
{
    int cur = 1;
    v.resize(n, vector<int>(m, 0));
    vector<vector<bool>> used(n, vector<bool>(m, false));
    v[pos.first][pos.second] = cur;
    used[pos.first][pos.second] = true;

    map<char, pair<int, int>> steps =
    {
        {'L', {0, -1}},
        {'R', {0, 1}},
        {'U', {-1, 0}},
        {'D', {1, 0}}
    };

    map<pair<bool, char>, string> runs =
    {
        {{true, 'L'}, "LU"},
        {{true, 'U'}, "UR"},
        {{true, 'R'}, "RD"},
        {{true, 'D'}, "DL"},

        {{false, 'L'}, "LD"},
        {{false, 'D'}, "DR"},
        {{false, 'R'}, "RU"},
        {{false, 'U'}, "UL"}
    };


    bool success = true;
    while(success)
    {
        success = false;
        string s = runs[ {po4asovoj, step}];
        for(auto ch : s)
        {
            int ii = pos.first + steps[ch].first;
            int jj = pos.second + steps[ch].second;

            if(ii >= 0 && ii < n && jj >= 0 && jj < m && !used[ii][jj])
            {
                cur++;
                v[ii][jj] = cur;
                used[ii][jj] = true;
                pos = {ii, jj};
                step = ch;
                success = true;
                break;
            }
        }
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> v;
    spiral(v, n, m, {n - 1, 0}, 'R', false);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            cout << v[i][j] << " ";
        cout << "\n";
    }
}

int main()
{
    solve();
    return 0;
}