#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define mod 1e9+7
#define ill int long long
#define fl float 
#define it int 
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
int main()
{
    it n;
    cin>>n;
    vi a(n);
    rep(i,n)
        a[i] = i+1;
    sort(a.begin(),a.end(),greater<int>());
    it x;
    cin>>x;
    it ans = 0;
    rep(i,n){
        ans += x/a[i];
        x -= x/a[i]*a[i];
    }
    cout<<ans<<endl;

    return 0;
}