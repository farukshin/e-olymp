//https://www.e-olymp.com/ru/problems/842
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const int trivial_limit = 50;
int p[1000];

ll gcd (ll a, ll b)
{
    return a ? gcd (b % a, a) : b;
}

ll powmod (ll a, ll b, ll m)
{
    ll res = 1;
    while (b)
        if (b & 1)
            res = (res * 1ll * a) % m,  --b;
        else
            a = (a * 1ll * a) % m,  b >>= 1;
    return res;
}

bool miller_rabin (ll n)
{
    ll b = 2;
    for (ll g; (g = gcd (n, b)) != 1; ++b)
        if (n > g)
            return false;
    ll p = 0, q = n - 1;
    while ((q & 1) == 0)
        ++p,  q >>= 1;
    ll rem = powmod (b, q, n);
    if (rem == 1 || rem == n - 1)
        return true;
    for (ll i = 1; i < p; ++i)
    {
        rem = (rem * 1ll * rem) % n;
        if (rem == n - 1)  return true;
    }
    return false;
}

bool even (ll n)
{
    return (n & 1) == 0;
}

void bisect (unsigned long long & n)
{
    n >>= 1;
}

void redouble (unsigned long long & n)
{
    n <<= 1;
}

//! Вычисляет корень из числа, округляя его вниз
ll sq_root (const ll & n)
{
    return (ll) floor (sqrt ((ld) n));
}

void mulmodU (unsigned long long & a, unsigned long long b, const unsigned long long & n)
{
    // сложная версия, основанная на бинарном разложении произведения в сумму
    if (a >= n)
        a %= n;
    if (b >= n)
        b %= n;
    unsigned long long res = 0;
    while (b)
        if (!even (b))
        {
            res += a;
            while (res >= n)
                res -= n;
            --b;
        }
        else
        {
            redouble(a);
            while (a >= n)
                a -= n;
            bisect (b);
        }
    a = res;
}


void mulmod (long long & a, long long b, const long long & n)
{
    bool neg = false;
    if (a < 0)
    {
        neg = !neg;
        a = -a;
    }
    if (b < 0)
    {
        neg = !neg;
        b = -b;
    }
    unsigned long long aa = a;
    mulmodU (aa, (unsigned long long)b, (unsigned long long)n);
    a = (long long)aa * (neg ? -1 : 1);
}

const std::vector<ll> & get_primes (const ll & b, ll & pi)
{

    static std::vector<ll> primes;
    static ll counted_b;

    // если результат уже был вычислен ранее, возвращаем его, иначе довычисляем простые
    if (counted_b >= b)
        pi = ll (std::upper_bound (primes.begin(), primes.end(), b) - primes.begin());
    else
    {
        // число 2 обрабатываем отдельно
        if (counted_b == 0)
        {
            primes.push_back (2);
            counted_b = 2;
        }

        // теперь обрабатываем все нечётные, пока не наберём нужное количество простых
        ll first = counted_b == 2 ? 3 : primes.back() + 2;
        for (ll cur = first; cur <= b; ++++cur)
        {
            bool cur_is_prime = true;
            for (vector<ll>::const_iterator iter = primes.begin(), end = primes.end(); iter != end; ++iter)
            {
                const ll & div = *iter;
                if (div * div > cur)
                    break;
                if (cur % div == 0)
                {
                    cur_is_prime = false;
                    break;
                }
            }
            if (cur_is_prime)
                primes.push_back (cur);
        }

        counted_b = b;
        pi = (ll) primes.size();
    }

    return primes;

}

ll jacobi (ll a, ll b)
{
    if (a == 0)  return 0;
    if (a == 1)  return 1;
    if (a < 0)
        if ((b & 2) == 0)
            return jacobi (-a, b);
        else
            return - jacobi (-a, b);
    ll a1 = a,  e = 0;
    while ((a1 & 1) == 0)
        a1 >>= 1,  ++e;
    ll s;
    if ((e & 1) == 0 || (b & 7) == 1 || (b & 7) == 7)
        s = 1;
    else
        s = -1;
    if ((b & 3) == 3 && (a1 & 3) == 3)
        s = -s;
    if (a1 == 1)
        return s;
    return s * jacobi (b % a1, a1);
}

bool bpsw (ll n)
{
    if ((ll)sqrt(n + 0.0) * (ll)sqrt(n + 0.0) == n)  return false;
    ll dd = 5;
    for (;;)
    {
        ll g = gcd (n, abs(dd));
        if (1 < g && g < n)  return false;
        if (jacobi (dd, n) == -1)  break;
        dd = dd < 0 ? -dd + 2 : -dd - 2;
    }
    ll p = 1,  q = (p * p - dd) / 4;
    ll d = n + 1,  s = 0;
    while ((d & 1) == 0)
        ++s,  d >>= 1;
    long long u = 1, v = p, u2m = 1, v2m = p, qm = q, qm2 = q * 2, qkd = q;
    for (ll mask = 2; mask <= d; mask <<= 1)
    {
        u2m = (u2m * v2m) % n;
        v2m = (v2m * v2m) % n;
        while (v2m < qm2)   v2m += n;
        v2m -= qm2;
        qm = (qm * qm) % n;
        qm2 = qm * 2;
        if (d & mask)
        {
            long long t1 = (u2m * v) % n,  t2 = (v2m * u) % n,
                      t3 = (v2m * v) % n,  t4 = (((u2m * u) % n) * dd) % n;
            u = t1 + t2;
            if (u & 1)  u += n;
            u = (u >> 1) % n;
            v = t3 + t4;
            if (v & 1)  v += n;
            v = (v >> 1) % n;
            qkd = (qkd * qm) % n;
        }
    }
    if (u == 0 || v == 0)  return true;
    long long qkd2 = qkd * 2;
    for (ll r = 1; r < s; ++r)
    {
        v = (v * v) % n - qkd2;
        if (v < 0)  v += n;
        if (v < 0)  v += n;
        if (v >= n)  v -= n;
        if (v >= n)  v -= n;
        if (v == 0)  return true;
        if (r < s - 1)
        {
            qkd = (qkd * 1ll * qkd) % n;
            qkd2 = qkd * 2;
        }
    }
    return false;
}

bool prime (ll n)   // эту функцию нужно вызывать для проверки на простоту
{
    for (ll i = 0; i < trivial_limit && p[i] < n; ++i)
        if (n % p[i] == 0)
            return false;
    if (p[trivial_limit - 1]*p[trivial_limit - 1] >= n)
        return true;
    if (!miller_rabin (n))
        return false;
    return bpsw (n);
}

void prime_init()   // вызвать до первого вызова prime() !
{
    for (ll i = 2, j = 0; j < trivial_limit; ++i)
    {
        bool pr = true;
        for (ll k = 2; k * k <= i; ++k)
            if (i % k == 0)
                pr = false;
        if (pr)
            p[j++] = i;
    }
}

ll prime_div_trivial (const ll & n, ll m)
{

    // сначала проверяем тривиальные случаи
    if (n == 2 || n == 3)
        return 1;
    if (n < 2)
        return 0;
    if (even (n))
        return 2;

    // генерируем простые от 3 до m
    ll pi;
    const vector<ll> & primes = get_primes (m, pi);

    // делим на все простые
    for (vector<ll>::const_iterator iter = primes.begin(), end = primes.end(); iter != end; ++iter)
    {
        const ll & div = *iter;
        if (div * div > n)
            break;
        else if (n % div == 0)
            return div;
    }

    if (n < m * m)
        return 1;
    return 0;

}

ll pollard_monte_carlo (ll n, unsigned m = 100)
{
    ll b = rand() % (m - 2) + 2;

    static std::vector<ll> primes;
    static ll m_max;
    if (primes.empty())
        primes.push_back (3);
    if (m_max < m)
    {
        m_max = m;
        for (ll prime = 5; prime <= m; ++++prime)
        {
            bool is_prime = true;
            for (std::vector<ll>::const_iterator iter = primes.begin(), end = primes.end();
                    iter != end; ++iter)
            {
                ll div = *iter;
                if (div * div > prime)
                    break;
                if (prime % div == 0)
                {
                    is_prime = false;
                    break;
                }
            }
            if (is_prime)
                primes.push_back (prime);
        }
    }

    ll g = 1;
    for (size_t i = 0; i < primes.size() && g == 1; i++)
    {
        ll cur = primes[i];
        while (cur <= n)
            cur *= primes[i];
        cur /= primes[i];
        b = powmod (b, cur, n);
        g = gcd (abs(b - 1), n);
        if (g == n)
            g = 1;
    }

    return g;
}

ll pollard_rho (ll n, unsigned iterations_count = 100000)
{
    ll
    b0 = rand() % n,
    b1 = b0,
    g;
    mulmod (b1, b1, n);
    if (++b1 == n)
        b1 = 0;
    g = gcd (abs (b1 - b0), n);
    for (unsigned count = 0; count < iterations_count && (g == 1 || g == n); count++)
    {
        mulmod (b0, b0, n);
        if (++b0 == n)
            b0 = 0;
        mulmod (b1, b1, n);
        ++b1;
        mulmod (b1, b1, n);
        if (++b1 == n)
            b1 = 0;
        g = gcd (abs (b1 - b0), n);
    }
    return g;
}

ll pollard_p_1 (ll n)
{
    // параметры алгоритма, существенно влияют на производительность и качество поиска
    const ll b = 13;
    const ll q[] = { 2, 3, 5, 7, 11, 13 };

    // несколько попыток алгоритма
    ll a = 5 % n;
    for (int j = 0; j < 10; j++)
    {

        // ищем такое a, которое взаимно просто с n
        while (gcd (a, n) != 1)
        {
            mulmod (a, a, n);
            a += 3;
            a %= n;
        }

        // вычисляем a^M
        for (size_t i = 0; i < sizeof q / sizeof q[0]; i++)
        {
            ll qq = q[i];
            ll e = (ll) floor (log ((double)b) / log ((double)qq));
            ll aa = powmod (a, powmod (qq, e, n), n);
            if (aa == 0)
                continue;

            // проверяем, не найден ли ответ
            ll g = gcd (aa - 1, n);
            if (1 < g && g < n)
                return g;
        }

    }

    // если ничего не нашли
    return 1;

}

ll pollard_bent (ll n, unsigned iterations_count = 19)
{
    ll
    b0 = rand() % n,
    b1 = (b0 * b0 + 2) % n,
    a = b1;
    for (unsigned iteration = 0, series_len = 1; iteration < iterations_count; iteration++, series_len *= 2)
    {
        ll g = gcd (b1 - b0, n);
        for (unsigned len = 0; len < series_len && (g == 1 && g == n); len++)
        {
            b1 = (b1 * b1 + 2) % n;
            g = gcd (abs(b1 - b0), n);
        }
        b0 = a;
        a = b1;
        if (g != 1 && g != n)
            return g;
    }
    return 1;
}

ll ferma (const ll & n, ll unused)
{
    ll
    x = sq_root (n),
    y = 0,
    r = x * x - y * y - n;
    for (;;)
        if (r == 0)
            return x != y ? x - y : x + y;
        else if (r > 0)
        {
            r -= y + y + 1;
            ++y;
        }
        else
        {
            r += x + x + 1;
            ++x;
        }
}

void factorize (ll & n, map<ll, ll> &result, ll unused)
{
    if (n == 1)
        ;
    else
        // проверяем, не простое ли число
        if (prime (n))
            ++result[n];
        else
            // если число достаточно маленькое, то его разлагаем простым перебором
            if (n < 1000 * 1000)
            {
                ll div = prime_div_trivial (n, 1000);
                ++result[div];
                ll g = n / div;
                factorize (g, result, unused);
            }
            else
            {
                // число большое, запускаем на нем алгоритмы факторизации
                ll div;
                // сначала идут быстрые алгоритмы Полларда
                div = pollard_monte_carlo (n);
                if (div == 1)
                    div = pollard_rho (n);
                if (div == 1)
                    div = pollard_p_1 (n);
                if (div == 1)
                    div = pollard_bent (n);
                // придётся запускать 100%-ый алгоритм Ферма
                if (div == 1)
                    div = ferma (n, unused);
                // рекурсивно обрабатываем найденные множители
                factorize (div, result, unused);
                ll g = n / div;
                factorize (g, result, unused);
            }
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    prime_init();
    ll n;
    cin >> n;

    map<ll, ll> result;
    factorize(n, result, 0);
    bool fl = false;
    for(auto f : result)
        for(int i = 0; i < f.second; i++)
        {
            cout << (fl ? "*" : "") << f.first;
            fl = true;
        }

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}