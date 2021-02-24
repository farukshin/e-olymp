//https://www.e-olymp.com/ru/problems/29
#include<iostream>

#include<deque>

using namespace std;
void IntToDeq(long long, deque<long long> &);
bool IsPal(deque<long long>);
long long rev(long long);
int main()
{
    long long n, count = 0, temp;
    deque <long long> d;
    cin >> n;
    IntToDeq(n, d);
    while(!IsPal(d))
    {
        temp = rev(n);


        n = n + temp;

        IntToDeq(n, d);
        count++;
    }
    cout << count;

}
long long rev(long long n)
{
    long long R = 0;
    do
    {
        R = R * 10 + n % 10;
        n /= 10;
    }
    while(n);
    return R;
}
bool IsPal(deque<long long> d)
{
    while(d.size() > 1)
    {
        if(d.back() != d.front()) return false;
        d.pop_back();
        d.pop_front();
    }
    return true;
}
void IntToDeq(long long n, deque<long long> &d)
{
    d.clear();
    do
    {
        d.push_front(n % 10);
        n /= 10;
    }
    while (n);
}