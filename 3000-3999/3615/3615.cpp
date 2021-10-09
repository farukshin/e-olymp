// https://www.e-olymp.com/ru/problems/3615
#include <cstdio>
#include <random>

using namespace std;

class TreapImplicit
{
    static minstd_rand generator;

    struct Node
    {
        int priority, value = 0, size = 1, minValue, add = 0;
        bool rev = false;
        Node* l = nullptr, * r = nullptr;
        Node(int _value) : priority(generator()), value(_value), minValue(_value) {};
    } *root = nullptr;

    static int getSize(Node* n)
    {
        return n ? n->size : 0;
    }

    static int getMinValue(Node* n)
    {
        return n ? n->minValue + n->add : 2e9;
    }

    static void push(Node *n)
    {
        if(n)
        {
            if(n->add)
            {
                n->value += n->add;
                n->minValue += n->add;
                if(n->l) n->l->add += n->add;
                if(n->r) n->r->add += n->add;
                n->add = 0;
            }
            if(n->rev)
            {
                swap(n->l, n->r);
                if(n->l) n->l->rev ^= 1;
                if(n->r) n->r->rev ^= 1;
                n->rev = false;
            }
        }
    }

    static void update(Node* n)
    {
        if (n)
        {
            n->size = getSize(n->l) + 1 + getSize(n->r);
            n->minValue = min(min(getMinValue(n->l), getMinValue(n->r)), n->value);
        }
    }

    static Node* merge(Node* a, Node* b)
    {
        push(a);
        push(b);
        if (!a || !b) return a ? a : b;
        if (a->priority > b->priority)
        {
            a->r = merge(a->r, b);
            update(a);
            return a;
        }
        else
        {
            b->l = merge(a, b->l);
            update(b);
            return b;
        }
    }

    static void split(Node* n, int k, Node*& a, Node*& b)
    {
        push(n);
        if (!n)
        {
            a = b = nullptr;
            return;
        }
        if (getSize(n->l) < k)
        {
            split(n->r, k - getSize(n->l) - 1, n->r, b);
            a = n;
        }
        else
        {
            split(n->l, k, a, n->l);
            b = n;
        }
        update(a);
        update(b);
    }

public:

    int get(int index)
    {
        Node* less, * greater, * equal;
        split(root, index, less, greater);
        split(greater, 1, equal, greater);
        int result = equal->value;
        root = merge(merge(less, equal), greater);
        return result;
    }

    void pushBack(int value)
    {
        root = merge(root, new Node(value));
    }

    void pushFront(int value)
    {
        root = merge(new Node(value), root);
    }

    void insert(int index, int value)
    {
        Node* less, * greater;
        split(root, index, less, greater);
        root = merge(merge(less, new Node(value)), greater);
    }

    void erase(int index)
    {
        Node* less, * greater, * equal;
        split(root, index, less, greater);
        split(greater, 1, equal, greater);
        root = merge(less, greater);
    }

    void erase(int l, int r)
    {
        Node* less, * greater, * equal;
        split(root, l, less, greater);
        split(greater, r - l + 1, equal, greater);
        root = merge(less, greater);
    }

    void revolve(int l, int r, int t)
    {
        Node* less, * greater, * equal;
        split(root, l, less, greater);
        split(greater, r - l + 1, equal, greater);

        int len = getSize(equal);
        t %= len;
        Node *a, *b;
        split(equal, len - t, a, b);
        equal = merge(b, a);
        root = merge(merge(less, equal), greater);
    }

    int size()
    {
        return getSize(root);
    }

    int minValue(int l, int r)
    {
        Node* less, * greater, * equal;
        split(root, l, less, greater);
        split(greater, r - l + 1, equal, greater);
        int result = equal->minValue;
        root = merge(merge(less, equal), greater);
        return result;
    }

    void add(int l, int r, int val)
    {
        Node* less, * greater, * equal;
        split(root, l, less, greater);
        split(greater, r - l + 1, equal, greater);
        equal->add += val;
        root = merge(merge(less, equal), greater);
    }

    void reverse(int l, int r)
    {
        Node* less, * greater, * equal;
        split(root, l, less, greater);
        split(greater, r - l + 1, equal, greater);
        equal->rev ^= 1;
        root = merge(merge(less, equal), greater);
    }

};

minstd_rand TreapImplicit::generator;

void solve()
{
    TreapImplicit t;
    int q;
    scanf("%d\n", &q);
    for(int i = 0; i < q; i++)
    {
        char ch;
        int a, b;
        scanf("%c %d %d\n", &ch, &a, &b);
        if(ch == '?')
            printf("%d\n", t.minValue(--a, --b));
        else if(ch == '+')
            t.insert(a, b);
    }
}

int main()
{
    solve();
    return 0;
}
