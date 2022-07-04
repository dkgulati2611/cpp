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
#define repp(j,i,n) for(int j = i;j<=n;j++)
int main()
{
    fastio();
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        pair<int,int> a[n];
        rep(i,n){
            cin>>a[i].first;
            a[i].second = i+1;
        }
        int k;cin>>k;
        sort(a,a+n);
        int ans = 1;
        rep(i,n){
            if(a[i].second == k){
                break;
            }
            ans++;
        }
        cout<<ans<<endl;

    }
    return 0;
}