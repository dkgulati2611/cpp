#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pi (3.141592653589)
#define mod 1e9+7
#define ill int long long
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
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int mft[n];
        rep(i,n) cin>>mft[i];
        int mt[n];
        rep(i,n) cin>>mt[i];
        int time[n];
        rep(i,n){time[i] = -1; }
        int maxt = -1;
        rep(i,n){
            if (mft[i] >= mt[i]){
                time[i] = mt[i];
            }
            else {
                time[i] = mft[i];
            }            
        }
        rep(i,n) {
            cout<<time[i]<<" ";
            maxt = max(maxt,time[i]);
        }
        cout<<endl;

        cout<<maxt<<endl;
    }
    return 0;
}