// https://www.e-olymp.com/ru/problems/6300
#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef long double ld;

bool cpp, java;

bool isCorrect(string s)
{
    bool tire = false;
    bool zag = false;
    bool err = !(s[0] >= 'a' && s[0] <= 'z');
    bool stro4 = false;
    for(int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if(ch == '_' && i != 0 && s[i - 1] == '_')
            tire = true, err = true;
        else if(ch == '_')
            tire = true;
        else if(ch >= 'A' && ch <= 'Z')
            zag = true;
        else if(ch >= 'a' && ch <= 'z')
            stro4 = true;
    }
    if(tire && zag || !stro4 || err || (s[0] >= 'A' && s[0] <= 'Z') || s[0] == '_' || s[s.length() - 1] == '_')
    {
        cout << "Error!";
        return false;
    }
    else if(!zag && !tire && stro4)
    {
        cout << s;
        return false;
    }

    cpp = tire && !zag && stro4;
    java = zag && !tire;
    return true;
}

string format(string s)
{
    vector<int> v;
    for(int i = 0; i < s.length(); i++)
        if(cpp && s[i] == '_')
            s[i] = ' ';
        else if(java && i != 0 && (s[i] >= 'A' && s[i] <= 'Z'))
            v.push_back(i);

    if(java && v.size())
        for(int i = v.size() - 1; i >= 0; i--)
            s = s.substr(0, v[i]) + " " + s.substr(v[i]);
    return s;
}

string to_cpp(string s)
{
    string ans = "";
    istringstream strim(format(s));
    string cur;
    while(strim >> cur)
    {
        if(ans != "")
            ans += '_';
        transform(cur.begin(), cur.end(), cur.begin(), ::tolower);
        ans += cur;
    }
    return ans;
}

string to_java(string s)
{
    string ans = "";
    istringstream strim(format(s));
    string cur;
    while(strim >> cur)
    {
        transform(cur.begin(), cur.end(), cur.begin(), ::tolower);
        if(ans != "")
            cur[0] = toupper(cur[0]);
        ans += cur;
    }
    return ans;
}


void solve()
{
    string s;
    cin >> s;

    if(!isCorrect(s))
        return;

    if(java)
        cout << to_cpp(s);
    else if(cpp)
        cout << to_java(s);
    else
        cout << "Error!";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(3);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}