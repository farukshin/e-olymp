//https://www.e-olymp.com/ru/problems/8763
long long  solve(int n, vector<int> arr)
{
    long long ans = 0;
    for(int i = 0; i < n; i++)
        ans += arr[i];

    return ans;
    // complete solution here
}