//https://www.e-olymp.com/ru/problems/5060
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

class ScobPos
{
public:
    map<char, char> mp;
    queue<string> printer;
    string initStr = "()";
    set<char> open, close;
    int kType = 1;
    map<char, int> mpType;


    void print();
    void gen(int n, int counter_open, int counter_close, string ans);
    bool check(string s);
    int get_number(string s);
    int get_number_simple(string s);

    void init()
    {
        if(initStr.length() % 2 != 0)
            return;

        for(int i = 0; i < initStr.size(); i++)
        {
            if(i % 2)
                close.insert(initStr[i]), mp[initStr[i]] = initStr[i - 1];
            else
                open.insert(initStr[i]), mp[initStr[i]] = initStr[i + 1];
            mpType[initStr[i]] = i / 2;
        }
        kType = initStr.length() / 2;
    }
    ScobPos(string s)
    {
        initStr = s;
        init();
    }
    ScobPos()
    {
        init();
    }
};


void ScobPos::print()
{
    while(!printer.empty())
    {
        cout << printer.front() << "\n";
        printer.pop();
    }
}

bool ScobPos::check(string s)
{
    stack<char> st;
    bool success2 = true;
    for(auto ch : s)
        if(open.count(ch) == 0 && close.count(ch) == 0)
            continue;
        else if(open.count(ch) > 0)
            st.push(ch);
        else if(!st.empty() && mp[ch] == st.top())
            st.pop();
        else
        {
            success2 = false;
            break;
        }

    if(success2 && !st.empty())
        success2 = false;

    return success2;
}

void ScobPos::gen(int n, int counter_open = 0, int counter_close = 0, string ans = "")
{
    if (counter_open + counter_close == n)
    {
        if(check(ans))
            printer.push(ans);
        return;
    }

    for(auto ch : initStr)
    {
        bool isOpen = open.count(ch) > 0;
        if (isOpen && counter_open < n)
            gen(n, counter_open + 1, counter_close, ans + ch);
        if (!isOpen && counter_open > counter_close)
            gen(n, counter_open, counter_close + 1, ans + ch);
    }
}

int ScobPos::get_number(string s)
{
    if(kType == 1)
        return get_number_simple(s);
    return 0;
}

int ScobPos::get_number_simple(string s)
{
    int MAXARR = s.length() + 5;
    int n = s.length() / 2;
    int num = 0;
    int depth = 0;
    int d[MAXARR][MAXARR];
    for(int i = 0; i < MAXARR; i++)
        d[0][i] = 0;
    for (int i = 0; i < 2 * n; i++)
        if (s[i] == '(')
            depth++;
        else
            num += d[2 * n - i - 1][depth + 1], depth--;
    return num;
}

void solve()
{
    //int n;
    //cin>>n;
    string s;
    //ScobPos sp("(){}[]");
    //sp.gen(n);
    //sp.print();
    //ll ans = 0;
    stack<int> st;
    while(cin >> s)
        if(s == "+" || s == "-" || s == "*" || s == "/")
        {
            int c1 = st.top();
            st.pop();
            int c2 = st.top();
            st.pop();
            int ans = s == "+" ? c1 + c2 : s == "-" ? c2 - c1 : s == "*" ? c2 * c1 : c2 / c1;
            st.push(ans);
        }
        else
        {
            int cur = stoi(s);
            st.push(cur);
        }

    cout << st.top();
}

int main()
{
    //ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}