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
        string s;
        cin >> s;
        string a = s;
        reverse(all(s));
        int k = s.length(), n = a.length();
        int c[256];
        memset(c, 0, sizeof(c));
        rep(i,0,n)
            c[a[i]]++;
        rep(i,0,n)
            c[s[i]]--;
        int ans = 0;
        for (int i = n - 1, j = n - 1; i >= 0;)
        {
            while (i >= 0 && s[i] != a[j])
            {
                i--;
                ans++;
            }
            if (i >= 0)
            {
                i--;
                j--;
            }
        }
        cout << ans << en;
    }
    return 0;
}