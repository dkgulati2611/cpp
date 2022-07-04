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
#define repp(j,i,n) for(int j = i;j<n;j++)
int main()
{
    int t;cin>>t;
    while(t--){
        int t1,t2,r1,r2;
        cin>>t1>>t2>>r1>>r2;
        string ans = "NO";
        float a = pow(t1,2)/pow(r1,3);
        float b = pow(t2,2)/pow(r2,3);
        if(a==b){
            ans = "YES";
        }
        else{
            ans = "NO";
        }
        cout<<ans<<"\n";
    }
    return 0;
}