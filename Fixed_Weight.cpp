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
        // if(n>=x){
        //     cout<<"YES"<<en;
        // }
        // else{
            int p = n/2+1;
            int q = (n-p+1)*p;
            if(x>q){
                cout<<"NO"<<en;
            }
            else{
                int count = 0;
                rep(i,1,n+1){
                    if(x%i == 0){
                        if(n-i+1 >= (x/i)){
                            count = 1;
                            break;
                        }
                    }
                }
                if(count==1){
                    cout<<"YES"<<en;
                }
                else{
                    cout<<"NO"<<en;
                }
            // }
        }
    }
    return 0;
}