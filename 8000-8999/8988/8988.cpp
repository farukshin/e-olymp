//https://www.e-olymp.com/ru/problems/8988
#include<iostream>

#include<string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'a' && s[i + 1] == 'b')
        {
            s.erase(i, 2);
            s.insert(i, "ups");
            i++;
        }

    }
    cout << s;
    return 0;
}