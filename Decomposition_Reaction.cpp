#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define en '\n' 
#define pi (3.141592653589)
#define mod 1e9+7
#define ll long long
#define vi vector<int>
#define db double
#define pb push_back
#define all(c) c.begin(), c.end()
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(j,i,n,k) for(int j = i;j<n;j+= k)
const ll INF = 1e9+7;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<ll> arr(n);
    rep(i,0,n,1)  cin>>arr[i];
    while(m--){
        ll c,x;
        cin>>c>>x;
        vector<ll> temp(2*x);
        rep(i,0,2*x,1)    cin>>temp[i];
        ll tt = arr[c-1];
        arr[c-1]=0;
        rep(i,0,temp.size(),2){
            arr[temp[i+1]-1] = (arr[temp[i+1]-1] + tt*temp[i])%INF;
        }
    }
    for(auto x: arr){
        cout<<x<<en;
    }
    return 0;
}