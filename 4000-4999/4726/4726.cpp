//https://www.e-olymp.com/ru/problems/4726
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int i = 0, count = 0;
    string s;
    getline(cin, s);
    while (s[i])
    {
        if (s[i] == 'f') count++;
        i++;
    }
    if (count == 1)
        cout << s.find('f') << endl;
    else if (count != 1 && count != 0)
        cout << s.find('f') << " " << s.find_last_of('f') << endl;
    return 0;

}