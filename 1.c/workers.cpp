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
    int n;
    cin>>n;
    int a[n];
    rep(i,n) cin>>a[i];
    int b[n];
    rep(i,n) cin>>b[i];
    int minc = INT_MAX;
    rep(i,n){
        if (b[i] == 1 || b[i] == 2 || b[i]==3){
            if (b[i] == 3 && a[i] < minc){
                minc = a[i];
            }
            else{
                repp(j,i+1,n){
                    if(b[i] +b[j] == 3)
                        minc = min(minc,a[i]+a[j]);
                }
            }
        }
    }
    cout<<minc<<endl;
    return 0;
}