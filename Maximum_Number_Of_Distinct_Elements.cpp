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
bool cmp(pair<ll int,ll int> &a,pair<ll int,ll int>&b){
    return a.second<b.second;
}
int main()
{
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<ll int,ll int>> a;
        rep(i,n) {
            ll int m;
            cin>>m;
            a.pb(mp(m,i));
        }
        sort(all(a));
        ll int k=0;
        rep(i,n){
            if(a[i].first>k){
                a[i].first = k;
                k++;        
            }
        }
        sort(a.begin(),a.end(),cmp);
        rep(i,n){
            cout<<a[i].first<<" ";
        }
        cout<<endl;


    }
    return 0;
}