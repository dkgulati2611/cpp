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
#define all(c) cc.begin(), c.end()
#define minn(a, b, c) min(c, min(a, b))
#define mini(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string ab = to_string(n);
        string a,b;
        int len = ab.length();
        for(int i = 0;i<len;i++){
            if(i == 0){
                a = ab[i];}
            if(i == len-1){
                b = ab[i];}
        }
        int fd = stoi(a);
        int ld = stoi(b);
        cout<<  fd+ld <<endl;
    }
    
    return 0;
}