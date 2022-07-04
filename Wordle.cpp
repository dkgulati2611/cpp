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
        string h,g;
        cin>>h>>g;
        string m;
        rep(i,0,5){
            if(h[i] == g[i]){
                m.pb('G');
            }
            else{
                m.pb('B');
            }
        }
        cout<<m<<endl;
    }
    return 0;
}