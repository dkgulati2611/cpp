#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define mod 1e9 + 7
#define ill int long long
#define vi vector<int>
#define vf vector<float>
#define vc vector<char>
#define db double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define minn(a, b, c) min(c, min(a, b))
#define mini(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)
#define rep(i, n) for (int i = 0; i < n; i++)
#define repp(j, i, n) for (int j = i; j <= n; j++)
int kadane(int a[], int n)
{
    int cs = 0;
    int maxsum = INT_MIN;
    rep(i, n)
    {
        cs += a[i];
        if (cs < 0)
            cs = 0;
        maxsum = max(cs, maxsum);
    }
    return maxsum;
}
int main()
{
    int n;cin>>n;
    int a[n];
    rep(i, n) cin >> a[i];
    int wrapsum;
    int nwrapsum;
    nwrapsum = kadane(a, n);
    int ts = 0;
    rep(i, n)
    {
        ts += a[i];
        a[i] = -a[i];
    }
    wrapsum = ts + kadane(a, n);

    cout << max(wrapsum, nwrapsum) << endl;

    return 0;
}