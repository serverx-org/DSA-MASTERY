#include <bits/stdc++.h>

using namespace std;

void insert(stack<int> &v, int temp)
{
    if (v.empty() || v.top() >= temp)
    {
        v.push(temp);
        return;
    }
    int val = v.top();
    v.pop();
    insert(v, temp);
    v.push(val);
}

void sortS(stack<int> &v)
{
    if (v.empty())
    {
        return;
    }
    int d = v.top();
    v.pop();
    sortS(v);
    insert(v, d);
    return;
}

int main()
{
    stack<int> v;
    v.push(15);
    v.push(31);
    v.push(4);
    v.push(3);
    v.push(1);
    v.push(31);
    v.push(21);

    sortS(v);

    while (!v.empty())
    {
        cout << v.top() << endl;
        v.pop();
    }

    return 0;
}
