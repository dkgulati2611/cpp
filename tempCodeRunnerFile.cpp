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
        int n,x;
        cin>>n>>x;
        int p=0,q=0;
        if(n%3==0){
            p = n/3;
        }
        else if(n%3==1){
            p = n/3 + 1;
            q+=2;
        }
        else{
            p = n/3;
            q++;
        }
        if(p+q<=n){
            cout<<"YES"<<en;
            cout<<p<<" "<<q<<" "<<(n-p-q)<<en;
        }
        else{
            cout<<"NO"<<en;
        }
    }
    return 0;
}