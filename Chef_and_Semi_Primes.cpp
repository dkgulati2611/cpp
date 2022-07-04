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
        int n;cin>>n;
        vector<ll int> a =  {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
        vector<ll int> b;
        rep(i,7){
            repp(j,i+1,a.size()){
                if(a[i] * a[j] < 200){
                    b.push_back(a[i] * a[j]);
                }
            }
        }
        vector<ll int> c;
        rep(i,b.size()){
            repp(j,i,b.size()){
                if(b[i]+b[j] <= 200){
                    c.push_back(b[i]+b[j]);
                }
            }
        }
        bool flag =  1;
        rep(i,c.size()){
            if (c[i] == n){
                flag = 1;
                break;
            }
            else 
                flag = 0;
        }
        if(flag ==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
    return 0;
}