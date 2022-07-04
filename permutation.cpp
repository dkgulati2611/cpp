#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> ans;
void permute(vector<int> &a, int idx)
{
    if (idx == a.size())
    {
        ans.push_back(a);
        return;
    }
    for (int i = idx; i < a.size(); i++)
    {
        swap(a[i],a[idx]);
        permute(a, idx++);
        swap(a[i],a[idx]);
    }
    return;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &elements : v)
    {
        cin >> elements;
    }
    permute(v, 0);
    for (auto v : ans)
    {
        for (auto &elements : v)
        {
            cout << elements;
        }
        cout << endl;
    }

    return 0;
}