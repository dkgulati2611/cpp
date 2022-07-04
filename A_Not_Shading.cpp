
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
    int t;cin>>t;
    while(t--){
        int n,m,r,c;
        cin>>n>>m>>r>>c;
        char arr[n][m];
        rep(i,0,n){
            rep(j,0,m){
                cin>>arr[i][j];
            }
        }
        int ro,co;
        int ans = 0;
        bool flag = false, t = false;
        rep(i,0,n){
            rep(j,0,m){
                if(arr[i][j] == 'B'){
                    flag = true;
                    ro = i;co = j;
                    if(ro == r-1 || co == c-1){
                        t = true;   
                        if(ro == r-1 && co == c-1){
                        		t = false;                        
                    		}
                    }                
                }
            }
        }
        if(arr[r-1][c-1] == 'B'){
            ans = 0;
        }
        else if(flag){
            if(t){
                ans = 1;
            }
            else{
                ans = 2;
            }
        }
        else{
            ans = -1;
        }
        cout<<ans<<en;
    }
    return 0;
}
