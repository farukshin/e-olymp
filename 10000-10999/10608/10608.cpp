// https://www.eolymp.com/ru/problems/10608
#include <iostream>
#include <stack>
using namespace std;
typedef long long ll;

void solve()
{
    int a;
    stack<int> st;
    string s;
    while (cin >> s)
    {
        if (s == "push")
        {
            cin >> a;
            st.push(a);
        }
        else if (s == "top" && !st.empty())
            cout << st.top() << "\n";
        else if (s == "pop")
            st.pop();
    }
}

int main()
{
    solve();
    return 0;
}
