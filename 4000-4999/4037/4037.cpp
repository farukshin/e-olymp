// https://www.eolymp.com/ru/problems/4037
#include <cstdio>
//#include <iostream>
//#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    scanf("%d\n", &n);
    pair<pair<int, int>, int> arr[100005];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d\n", &arr[i].first.first, &arr[i].second);
        arr[i].first.second = i;
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
        printf("%d %d\n", arr[i].first.first, arr[i].second);
}

int main()
{
    solve();
    return 0;
}
