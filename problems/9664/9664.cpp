//https://www.e-olymp.com/ru/problems/9664
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

    int getAge()
    {
        return Age;
    }
    int getSalary()
    {
        return Salary;
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
    Teacher getOldestTeacher()
    {
        auto res = t[0].second;
        for(auto d : t)
            if(d.second.getAge() > res.getAge())
                res = d.second;
        return res;
    }
    Teacher getOldestTeacher(string Subject)
    {
        auto list = getTeachers(Subject);
        auto res = list.t[0].second;
        for(auto d : list.t)
            if(d.second.getAge() > res.getAge())
                res = d.second;
        return res;
    }
    Teacher getYoungestTeacher()
    {
        auto res = t[0].second;
        for(auto d : t)
            if(d.second.getAge() < res.getAge())
                res = d.second;
        return res;
    }
    Teacher getYoungestTeacher(string Subject)
    {
        auto list = getTeachers(Subject);
        auto res = list.t[0].second;
        for(auto d : list.t)
            if(d.second.getAge() < res.getAge())
                res = d.second;
        return res;
    }

    int getTeachersBudget()
    {
        int ans = 0;
        for(auto d : t)
            ans += d.second.getSalary();
        return ans;
    }
    int getTeachersBudget(string Subject)
    {
        int ans = 0;
        for(auto d : t)
            if(d.second.getSubject() == Subject)
                ans += d.second.getSalary();
        return ans;
    }
    double getTeachersAverageSalary()
    {
        return 1.0 * getTeachersBudget() / t.size();
    }
    double getTeachersAverageSalary(string Subject)
    {
        int ans = 0, k = 0;
        for(auto d : t)
            if(d.second.getSubject() == Subject)
                ans += d.second.getSalary(), k++;
        return 1.0 * ans / k;
    }

    Teacher getTeacherWithMaxSalary()
    {
        auto res = t[0].second;
        for(auto d : t)
            if(d.second.getSalary() > res.getSalary())
                res = d.second;
        return res;
    }
    Teacher getTeacherWithMaxSalary(string Subject)
    {
        auto list = getTeachers(Subject);
        auto res = list.t[0].second;
        for(auto d : list.t)
            if(d.second.getSalary() > res.getSalary())
                res = d.second;
        return res;
    }
    Teacher getTeacherWithMinSalary()
    {
        auto res = t[0].second;
        for(auto d : t)
            if(d.second.getSalary() < res.getSalary())
                res = d.second;
        return res;
    }
    Teacher getTeacherWithMinSalary(string Subject)
    {
        auto list = getTeachers(Subject);
        auto res = list.t[0].second;
        for(auto d : list.t)
            if(d.second.getSalary() < res.getSalary())
                res = d.second;
        return res;
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
    cout << list.getTeacherWithMaxSalary().toString() << "\n"
         << list.getTeacherWithMaxSalary("Physics").toString() << "\n"
         << list.getTeacherWithMinSalary().toString() << "\n"
         << list.getTeacherWithMinSalary("Math").toString();

}

int main()
{
    //cout.setf(std::ios::fixed); //cout.precision(2);

    solve();
    // int t; cin >> t; while (t--) solve();
    return 0;
}