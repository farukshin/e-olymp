// https://www.e-olymp.com/ru/problems/6603
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

template <class S, S (*op)(S, S), S (*e)()> struct segtree
{
public:
    segtree() : segtree(0) {}
    explicit segtree(int n) : segtree(std::vector<S>(n, e())) {}
    explicit segtree(const std::vector<S>& v) : _n(int(v.size()))
    {
        log = ceil_pow2(_n);
        size = 1 << log;
        d = std::vector<S>(2 * size, e());
        for (int i = 0; i < _n; i++) d[size + i] = v[i];
        for (int i = size - 1; i >= 1; i--)
        {
            update(i);
        }
    }

    int ceil_pow2(int n)
    {
        int x = 0;
        while ((1U << x) < (unsigned int)(n)) x++;
        return x;
    }

    void set(int p, S x)
    {
        assert(0 <= p && p < _n);
        p += size;
        d[p] = x;
        for (int i = 1; i <= log; i++) update(p >> i);
    }

    S get(int p) const
    {
        assert(0 <= p && p < _n);
        return d[p + size];
    }

    S prod(int l, int r) const
    {
        assert(0 <= l && l <= r && r <= _n);
        S sml = e(), smr = e();
        l += size;
        r += size;

        while (l < r)
        {
            if (l & 1) sml = op(sml, d[l++]);
            if (r & 1) smr = op(d[--r], smr);
            l >>= 1;
            r >>= 1;
        }
        return op(sml, smr);
    }

    S all_prod() const
    {
        return d[1];
    }

    template <bool (*f)(S)> int max_right(int l) const
    {
        return max_right(l, [](S x)
        {
            return f(x);
        });
    }
    template <class F> int max_right(int l, F f) const
    {
        assert(0 <= l && l <= _n);
        assert(f(e()));
        if (l == _n) return _n;
        l += size;
        S sm = e();
        do
        {
            while (l % 2 == 0) l >>= 1;
            if (!f(op(sm, d[l])))
            {
                while (l < size)
                {
                    l = (2 * l);
                    if (f(op(sm, d[l])))
                    {
                        sm = op(sm, d[l]);
                        l++;
                    }
                }
                return l - size;
            }
            sm = op(sm, d[l]);
            l++;
        }
        while ((l & -l) != l);
        return _n;
    }

    template <bool (*f)(S)> int min_left(int r) const
    {
        return min_left(r, [](S x)
        {
            return f(x);
        });
    }
    template <class F> int min_left(int r, F f) const
    {
        assert(0 <= r && r <= _n);
        assert(f(e()));
        if (r == 0) return 0;
        r += size;
        S sm = e();
        do
        {
            r--;
            while (r > 1 && (r % 2)) r >>= 1;
            if (!f(op(d[r], sm)))
            {
                while (r < size)
                {
                    r = (2 * r + 1);
                    if (f(op(d[r], sm)))
                    {
                        sm = op(d[r], sm);
                        r--;
                    }
                }
                return r + 1 - size;
            }
            sm = op(d[r], sm);
        }
        while ((r & -r) != r);
        return 0;
    }

private:
    int _n, size, log;
    std::vector<S> d;

    void update(int k)
    {
        d[k] = op(d[2 * k], d[2 * k + 1]);
    }
};

int op(int a, int b)
{
    //return max(a, b);
    return a + b;
}

int e()
{
    return 0;
}

int target;

bool f(int v)
{
    return v < target;
}

void solve()
{
    int n, q;
    while(cin >> n >> q)
    {
        set<int> pos0;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            int cur;
            cin >> cur;
            if(cur == 0) pos0.insert(i);
            a[i] = (cur < 0 ? 1 : 0);
        }

        segtree<int, op, e> seg(a);

        for (int i = 0; i < q; i++)
        {
            char t;
            cin >> t;
            if (t == 'C')
            {
                int pos, val;
                cin >> pos >> val;
                pos--;

                if(pos0.count(pos) && val != 0)
                {
                    auto it = pos0.lower_bound(pos);
                    if(it != pos0.end() && *it == pos)
                        pos0.erase(it);
                }
                else if(val == 0) pos0.insert(pos);

                seg.set(pos, (val < 0 ? 1 : 0));
            }
            else if (t == 'P')
            {
                int l, r;
                cin >> l >> r;
                l--;
                auto it = pos0.lower_bound(l);
                if(it != pos0.end() && *it <= (r - 1))
                    cout << '0';
                else
                    cout << (seg.prod(l, r) % 2 ? '-' : '+');
            }
        }
        cout << "\n";
    }
}

int main()
{
    solve();
    return 0;
}
