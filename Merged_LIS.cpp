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
#define repp(j,i,n) for(ll j = i;j<=n;j++)
ll lengthOfLIS(vector<ll>& a)
{
    ll n = a.size();
    vector<ll> len;
    rep(i,n)
    {
        auto lb = upper_bound(len.begin(), len.end(), a[i]);
        if(lb != len.end())
        {
            *lb = min(*lb, a[i]);
        }
        else
        {
            len.push_back(a[i]);
        }
    }
    return len.size();
}
int main()
{
    int t;cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<ll> a(n),b(m);
        rep(i,n)    cin>>a[i];
        rep(i,m)    cin>>b[i];
        ll mx1=1,mx2=1;
        mx1 = lengthOfLIS(a);
        mx2 = lengthOfLIS(b);
        cout<<mx1+mx2<<endl;
    }
    return 0;
}