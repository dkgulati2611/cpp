#include <bits/stdc++.h>
using namespace std;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define en '\n'
#define pi (3.141592653589)
#define mod 1e9 + 7
#define ll long long
#define vi vector<int>
#define db double
#define pb push_back
#define all(c) c.begin(), c.end()
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)
#define rep(j, i, n) for (int j = i; j < n; j++)
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    int sum = 0;
    rep(i, 0, n)
    {
        int val;
        cin >> val;
        a.pb(val);
        sum += a[i];
    }
    int a1 = 1, d = 1;
    int ans = n * (2 * a1 + n * d - d) / 2;
    if (ans == sum)
    {
        cout << "YES" << en;
    }
    else
    {
        cout << "NO" << en;
    }

    return 0;
}