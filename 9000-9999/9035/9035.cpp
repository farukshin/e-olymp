//https://www.e-olymp.com/ru/problems/9035
class MyStack
{
private:
    stack<pair<int, int>> s;
    int mn;
public:
    void push(int x)
    {
        int minima = s.empty() ? x : min (x, s.top().second);
        s.push ({x, minima});
    }

    int pop(void)
    {
        int result = s.top().first;
        s.pop();
        return result;
    }

    int top(void)
    {
        return s.top().first;
    }

    int GetMin(void)
    {
        int m = s.top().second;
        return m;
    }

    int GetSize(void)
    {
        return s.size();
    }
};