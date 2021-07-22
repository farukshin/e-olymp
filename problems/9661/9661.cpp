//https://www.e-olymp.com/ru/problems/9661
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

    string getSubject()
    {
        return Subject;
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
                    ans += (ans == "" ? "" : "\n") + (*itp).second.toString(), itp++;
                else
                    ans += (ans == "" ? "" : "\n") + (*itt).second.toString(), itt++;
            }
            else if(itp == p.end())
                ans += (ans == "" ? "" : "\n") + (*itt).second.toString(), itt++;
            else if(itt == t.end())
                ans += (ans == "" ? "" : "\n") + (*itp).second.toString(), itp++;
        }
        return ans;
    }
    ListOfPeople getTeachers()
    {
        ListOfPeople res;
        for(auto d : t)
            res.add(d.second);
        return res;
    }
    int GetNumberOfTeachers()
    {
        return t.size();
    }
    ListOfPeople getNotTeachers()
    {
        ListOfPeople res;
        for(auto d : p)
            res.add(d.second);
        return res;
    }
    int GetNumberOfNotTeachers()
    {
        return p.size();
    }
    ListOfPeople getTeachers(string Subject)
    {
        ListOfPeople res;
        for(auto d : t)
            if(d.second.getSubject() == Subject)
                res.add(d.second);
        return res;
    }
    int GetNumberOfTeachers(string Subject)
    {
        return getTeachers(Subject).size();
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
    cout << list.getTeachers().toString() << "\n"
         << list.GetNumberOfTeachers() << "\n"
         << list.getTeachers("Math").toString() << "\n"
         << list.GetNumberOfTeachers("Physics");
}

int main()
{
    solve();
    // int t; cin >> t; while (t--) solve();
    return 0;
}