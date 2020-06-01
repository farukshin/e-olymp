//https://www.e-olymp.com/ru/problems/1060
//#tech_debt
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

struct point
{
    int x;
    int y;
};

struct step
{
    point begin;
    point end;
};

vector<vector<int>> ss;
stack<step> st;

void solve()
{
    int n;
    cin >> n;
    char ms[n + 2][n + 2];
    for (int i = 0; i < n + 2; i++)
    {
        ms[0][i] = 'O';
        ms[i][0] = 'O';
        ms[n + 1][i] = 'O';
        ms[i][n + 1] = 'O';
    }

    point start, finish, cur;
    char ch;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            cin >> ch;
            ms[i][j] = ch;
            if (ch == '@')
                start = {i, j};
            else if (ch == 'X')
                finish = {i, j};
        }

    // for (int i = 0; i <= n+1; i++)
    // {
    //     for (int j = 0; j <= n+1; j++)
    //     {
    //         cout << " " << ms[i][j];
    //     }
    //     cout << endl;
    // }
    //printf("start.x=%d start.y=%d", start.x, start.y);

    bool fl = false;
    bool run = true;

    cur = start;

    while (run)
    {
        //st.push({cur, start});

        char l = ms[cur.x - 1][cur.y];
        char r = ms[cur.x + 1][cur.y];
        char u = ms[cur.x][cur.y - 1];
        char d = ms[cur.x][cur.y + 1];

        fl = (l == 'X' || r == 'X' || u == 'X' || d == 'X' ? true : fl);
        run = (fl || l == '.' || r == '.' || u == '.' || d == '.' ? true : false);

        if (l == '.' || l == 'X')
        {
            st.push({cur, {cur.x - 1, cur.y}});
            ms[cur.x - 1][cur.y] = '#';
            cur.x -= 1;
        }
        if (l == 'X')
            break;

        if (r == '.' || r == 'X')
        {
            st.push({cur, {cur.x + 1, cur.y}});
            ms[cur.x + 1][cur.y] = '#';
            cur.x += 1;
        }
        if (r == 'X')
            break;

        if (u == '.' || u == 'X')
        {
            st.push({cur, {cur.x, cur.y - 1}});
            ms[cur.x][cur.y - 1] = '#';
            cur.y -= 1;
        }
        if (u == 'X')
            break;

        if (d == '.' || d == 'X')
        {
            st.push({cur, {cur.x, cur.y + 1}});
            ms[cur.x][cur.y + 1] = '#';
            cur.y += 1;
        }
        if (d == 'X')
            break;
    }

    if (!fl)
        cout << "N" << endl;
    else
    {
        cout << "Y" << endl;
        point cur;
        cur = finish;
        while (!st.empty())
        {
            auto top = st.top();
            st.pop();
            if (top.end.x == cur.x && top.end.y == cur.y)
            {
                ms[top.end.x][top.end.y] = '+';
                cur.x = top.begin.x;
                cur.y = top.begin.y;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << ms[i][j] << " ";
            }
            cout << endl;
        }
    }
}

int main()
{
    ios_b;
#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif
    solve();
    return 0;
}
