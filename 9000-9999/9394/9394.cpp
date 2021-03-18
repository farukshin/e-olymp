//https://www.e-olymp.com/ru/problems/9394
int suma(int n)
{
    int res = 0;
    n = abs(n);

    while(n)
    {
        res += n % 10;
        n /= 10;
    }
    return res;
}