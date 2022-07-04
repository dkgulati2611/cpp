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
#define rep(j, i, n) for (ll j = i; j < n; j++)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, q, x, y;
        cin >> n >> q;
        string s, st;
        cin >> s >> st;
        ll v[n], o[n], e[n];
        rep(i, 0, n)
        {
            if (st[i] >= s[i])
                v[i] = (st[i] - s[i]);
            else
                v[i] = 26 - (s[i] - st[i]);
        }

        o[0] = 0;
        e[0] = v[0];
        rep(i, 1, n)
        {
            if (i % 2)
                o[i] = o[i - 1] + v[i], e[i] = e[i - 1];
            else
                o[i] = o[i - 1], e[i] = e[i - 1] + v[i];
        }

        ll s1, s2;
        rep(i, 0, q)
        {
            cin >> x >> y;
            x--;
            y--;
            s1 = o[y], s2 = e[y];
            if (x > 0)
                s1 -= o[x - 1], s2 -= e[x - 1];

            if (abs(s1 - s2) % 26 == 0)
                cout << "Yes" << '\n';
            else
                cout << "No" << '\n';
        }
    }
    return 0;
}