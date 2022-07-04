#include <bits/stdc++.h>
using namespace std;
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
int mySqrt(int x) {
        long int start = 0;
        long int end = x;
        long int res;
        while(end>= start){
            long int mid = (start+end)/2;
            long int val = mid*mid;
            if(val == x){
                return mid;
            }
            else if(val>x){
                end = mid-1;
            }
            else{
                res = mid;
                start = mid+1;
            }
        }
        return res;
    }
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans = mySqrt(n);
        cout<<ans<<endl;
    }
    return 0;
}