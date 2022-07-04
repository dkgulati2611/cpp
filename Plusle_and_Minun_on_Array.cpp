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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> p, q;
        rep(i, 0, n)
        {
            cin >> a[i];
            if (i % 2 == 1)
            {
                p.pb(abs(a[i]));
            }
            else
            {
                q.pb(abs(a[i]));
            }
        }
        ll ans = 0;
        sort(p.begin(), p.end());
        sort(q.begin(), q.end());
        if (p[p.size() - 1] > q[0])
            swap(p[p.size() - 1], q[0]);
        for (auto x : q)
            ans += x;
    for (auto x : p)
            ans -= x;
        cout << ans << endl;
    }
return 0;
}