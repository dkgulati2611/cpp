#include <bits/stdc++.h>
using namespace std;
vector<int> compareTriplets(vector<int> a, vector<int> b)
{
    vector<int> c;
    int as = 0,bs = 0;   

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > b[i])
        {
            as += 1;
        }
        else if (b[i] > a[i])
        {
            bs += 1;
        }
    }
    c.push_back(as);
    c.push_back(bs);
    return c;
}

int main()
{
    vector<int> a(3);
    for (int i = 0; i<3;i++)
    {
        cin >> a[i];
    }
    vector<int> b(3);
    for (int i = 0; i<3; i++)
    {
        cin >> b[i];
    }
    vector<int> d = compareTriplets(a, b);

    for (auto i: d)
    {
        cout<<i<<" ";
    }

    return 0;
}
