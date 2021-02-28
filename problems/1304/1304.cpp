//https://www.e-olymp.com/ru/problems/1304
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    //cout.setf(std::ios::fixed);
    //cout.precision(2);

    priority_queue<int> maxq;
    priority_queue<int, vector<int>, greater<int>> minq;

    int n, first = 0, i = 0;

    while(cin >> n)
    {
        i++;
        if(i == 1)
        {
            first = n;
            printf("%d\n", n);
            continue;
        }
        else if(i == 2)
        {
            minq.push(max(first, n));
            maxq.push(min(first, n));
        }
        else if (n < maxq.top())
            maxq.push(n);
        else
            minq.push(n);

        if(maxq.size() > minq.size() + 1 )
        {
            auto cur = maxq.top();
            maxq.pop();
            minq.push(cur);
        }
        else if(minq.size() > maxq.size() + 1)
        {
            auto cur = minq.top();
            minq.pop();
            maxq.push(cur);
        }

        int med;
        if(maxq.size() == minq.size())
            med = (maxq.top() + minq.top()) / 2;
        else if(maxq.size() > minq.size())
            med = maxq.top();
        else if(minq.size() > maxq.size())
            med = minq.top();
        //printf("n=%d | minq size=%d top=%d | maxq size=%d top=%d | med=%d\n", n, minq.size(), minq.top(), maxq.size(), maxq.top(), med);
        printf("%d\n", med);
    }
}

#include <iostream>

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t;cin >> t;while (t--)solve();

    return 0;
}