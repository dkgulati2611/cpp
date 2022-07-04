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
        int n;cin>>n;
        vector<int> a(n);
        rep(i,0,n)  cin>>a[i];
        sort(a.begin(),a.end());
        bool flag= false;
        int ans = 0;
        do{
            rep(i,0,n-1){
                ans += a[i] * a[i+1];
            }
            if(ans%2!=0){
                flag = true;
                break;
            }
            else{
                flag = false;
                continue;
            }
        }while(next_permutation(a.begin(),a.end()));
        if(flag){
            rep(i,0,n){
                    cout<<a[i]<<" ";
            }cout<<en;
        }
        else{
            cout<<-1<<en;
        }
    }
    return 0;
}