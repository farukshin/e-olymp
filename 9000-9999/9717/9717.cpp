//https://www.e-olymp.com/ru/problems/9717
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

class BirdInterface
{

public:
    BirdInterface() {};

    void fly()
    {
        ;
    }

    void eat()
    {
        ;
    }

    void sleep()
    {
        ;
    }
};

class Bird : public BirdInterface
{
public:
    Bird() {};

    void fly()
    {
        cout << "Bird flies\n";
    }

    void eat()
    {
        cout << "Bird eats\n";
    }

    void sleep()
    {
        cout << "Bird sleeps\n";
    }
};

void solve()
{
    Bird br;
    string s;
    while(cin >> s)
        if(s == "fly")
            br.fly();
        else if(s == "eat")
            br.eat();
        else if(s == "sleep")
            br.sleep();
}

int main()
{
    solve();
    //int t; cin >> t; while (t--) solve();
    return 0;
}