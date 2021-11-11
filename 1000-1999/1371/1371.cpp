// https://www.e-olymp.com/ru/problems/1371
//#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
typedef long long ll;

#define MAX 100010

int mas[MAX], Id[MAX];

int Repr(int n)

{

    if (n == mas[n])
        return n;

    return mas[n] = Repr(mas[n]);
}
int Union(int x, int y)

{

    int x1 = Repr(x), y1 = Repr(y);

    mas[x1] = y1;

    return (x1 != y1);
}

void solve()
{
    int n, i, j, n1, n2;
    char c;
    while (scanf("%d\n", &n) == 1)
    {
        for (i = 1; i < MAX; i++)
            mas[i] = i, Id[i] = i;
        int MaxID = n + 1;
        n1 = n2 = 0;
        while (scanf("%c", &c), c != 'e')
        {
            if (c == 'c')
            {
                scanf("%d %d\n", &i, &j);
                Union(Id[i], Id[j]);
            }
            if (c == 'd')
            {
                scanf("%d\n", &i);
                Id[i] = MaxID++;
            }
            if (c == 'q')
            {
                scanf("%d %d\n", &i, &j);
                if (Repr(Id[i]) == Repr(Id[j]))
                    n1++;
                else
                    n2++;
            }
        }
        printf("%d , %d\n", n1, n2);
    }
}

int main()
{
    solve();
    return 0;
}
