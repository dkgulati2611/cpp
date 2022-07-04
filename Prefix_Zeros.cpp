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
#define rrep(i, n) for(int i=n;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define repp(j,i,n) for(int j = i;j<=n;j++)
ll solve(string s, int m){
    ll a = 0;
    rrep(i,m)
    {
        ll v = (int(s[i])-int('0')+a)%10;
        if(v==0)
            continue;
        a+=10-v;
    }
    return a;
}
int main()
{
    int t;cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        ll l=0,r=n-1,ans=0;
        while(l<=r)
        {
            ll m=(l+r)/2;
            if(solve(s,m)>k)
                r=m-1;
            else
            {
                ans = m+1;
                l=m+1;
            }
        }
        cout<<ans<<endl;



    }
    return 0;
}