//https://www.e-olymp.com/ru/problems/9659
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

class Teacher : public Person
{
protected:
    string Subject;
    int Salary;

public:
    Teacher(string _Surname, string _Name, int _Age, string _Subject, int _Salary)
        : Person(_Surname, _Name, _Age)
    {
        Subject = _Subject, Salary = _Salary;
    }

    string toString()
    {
        string ans = Surname + " " + Name + " " + to_string(Age) + " " + Subject + " " + to_string(Salary);
        return ans;
    }
};

class ListOfPeople
{
    vector<pair<int, Person>> p;
    vector<pair<int, Teacher>> t;

public:
    void add(Person pp)
    {
        p.push_back({size(), pp});
    }
    void add(Teacher tt)
    {
        t.push_back({size(), tt});
    }
    int size()
    {
        return p.size() + t.size();
    }
    string toString()
    {
        string ans = "";
        auto itp = p.begin();
        auto itt = t.begin();
        while(true)
        {
            if(itp == p.end() && itt == t.end())
                break;

            if(itp != p.end() && itt != t.end())
            {
                if((*itt).first >= (*itp).first)
                    ans += (*itp).second.toString() + "\n", itp++;
                else
                    ans += (*itt).second.toString() + "\n", itt++;
            }
            else if(itp == p.end())
                ans += (*itt).second.toString() + "\n", itt++;
            else if(itt == t.end())
                ans += (*itp).second.toString() + "\n", itp++;
        }
        return ans;
    }
};

void solve()
{
    string s, l, n, p;
    int a, k;
    ListOfPeople list;

    while (cin >> s)
    {
        if (s == "Person")
        {
            cin >> l >> n >> a;
            Person pp(l, n, a);
            list.add(pp);
        }
        else if (s == "Teacher")
        {
            cin >> l >> n >> a >> p >> k;
            Teacher tt(l, n, a, p, k);
            list.add(tt);
        }
    }

    // System.out.println(list);
    cout << list.toString();
}

int main()
{
    solve();
    // int t; cin >> t; while (t--) solve();
    return 0;
}