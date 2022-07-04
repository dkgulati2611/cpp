#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(auto &i : v){
            cin>>i;
        }
        int mx = v[0],mn = v[0],k = 0,s = 0;
        for(int i = 0;i<n;i++){
            if(mx<v[i]){
                k=i;
            }
            if(mn>v[i]){
                s=i;
            }
        }
        if(k>= s){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}