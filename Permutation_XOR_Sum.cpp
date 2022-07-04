#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pi (3.141592653589)
#define mod 1e9+7
#define ll long long
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
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define repp(j,i,n) for(int j = i;j<=n;j++)
ll flip(ll n){
    ll m = 0,count = 0;
    while(n){
        if(n%2 == 0) m += (1LL<<count);
        n /= 2,count++;
        if(n <= 0) break;
    }
    return m;
}
int main()
{
    fastio();
    int t;cin>>t;
    while(t--){
        ll n; cin>>n;
        ll ans = 0;
        while(n > 0)
            {
                ll p = flip(n);
                ll q = n;
                if((q&(q+1)) == 0) q--;
                ll val = ((q * (q+1)) / 2) - ((p * (p-1)) / 2);
                ans += (val*2);
                n = p-1;
            }
        cout<<ans<<"\n";
    }
    return 0;
}