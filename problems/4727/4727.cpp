//https://www.e-olymp.com/ru/problems/4727
#include <iostream>

#include <string>

using namespace std;

string str;
int value = 0;

int main()
{
    cin >> str;
    for (int i = 0; i < str.length(); i++) if (str[i] == 'f') value++;
    if (value == 0)
        cout << "-2\n";
    else if (value == 1)
        cout << "-1\n";
    else
    {
        value = 1;
        for (int i = 0; i < str.length(); i++) if (str[i] == 'f' && value == 1) value++;
            else if (str[i] == 'f')
            {
                cout << i << endl;
                return 0;
            }
    }
}