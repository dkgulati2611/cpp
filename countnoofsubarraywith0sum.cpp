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
#define rep(j,i,n) for(int j = i;j<n;j++)
int main()
{
    int n;cin>>n;
    vi a(n);
    rep(i,0,n)
    cin>>a[i];
    map<int,int> cnt;
    int prefsum = 0;
    rep(i,0,n){
        prefsum += a[i];
        cnt[prefsum]++;
    }
    int ans = 0;
    map<int,int> :: iterator itr;
    for(itr = cnt.begin();itr != cnt.end();itr++){
        int c = itr-> second;
        ans += c*(c-1)/2;
        if(itr->first ==0){
            ans += itr->second;
        }
    }
    cout<<ans<<en;
    return 0;
}
