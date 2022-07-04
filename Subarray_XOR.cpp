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
vector<string> sub(string s,string ans){
    vector<string> a;
    if(s.length()==0){
        a.pb("");
        return a;
    }
    char ch = s[0];
    string ros = s.substr(1);
    sub(ros,ans);
    sub(ros,ch+ans);
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;cin>>s;
        vector<string> p = sub(s,"");
        int ans = 0;
        rep(i,0,p.size()){
            ans ^= stoi(p[i]);
        }
        cout<<ans<<en;
    }
    return 0;
}