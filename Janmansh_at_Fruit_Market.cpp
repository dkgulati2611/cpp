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
    int t;
    cin>>t;
    while(t--){
        int x,a,b,c;
        cin>>x>>a>>b>>c;
        int d = min(a,min(b,c));
        int mincost = 0;
        int e = max(a,max(b,c));
        int f = (a+b+c)-d-e;
        mincost = d*(x-1) + f;
        cout<<mincost<<en;
        
    }
    return 0;
}