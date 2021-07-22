// https://www.e-olymp.com/ru/problems/9658
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

class Person
{
protected:
    string Surname, Name;
    int Age;

public:
    Person(string _Surname, string _Name, int _Age)
    {
        Surname = _Surname, Name = _Name, Age = _Age;
    }

    string toString()
    {
        string ans = Surname + " " + Name + " " + to_string(Age);
        return ans;
    }
};

class Teacher: public Person
{
protected:
    string Subject;
    int Salary;
public:

    Teacher(string _Surname, string _Name, int _Age, string _Subject, int _Salary): Person(_Surname, _Name, _Age)
    {
        Subject = _Subject, Salary = _Salary;
    }

    string toString()
    {
        string ans = Surname + " " + Name + " " + to_string(Age) + " " + Subject + " " + to_string(Salary);
        return ans;
    }
};

void solve()
{
    string s, l, n, p;
    int a, k;
    while(cin >> s)
    {
        if(s == "Person")
        {
            cin >> l >> n >> a;
            Person pp(l, n, a);
            cout << pp.toString() << "\n";
        }
        else if(s == "Teacher")
        {
            cin >> l >> n >> a >> p >> k;
            Teacher tt(l, n, a, p, k);
            cout << tt.toString() << "\n";
        }
    }
}

int main()
{
    solve();
    //int t; cin >> t; while (t--) solve();
    return 0;
}