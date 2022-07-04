#include <bits/stdc++.h>
using namespace std;
void minMax(vector <long int> a){
    int n = a.size();
    long long int maxsum = 0,minsum = 9999999999;
    long long int sum = 0;
    for(int i=0;i<n;i++){
        sum += a[i];
    }
        for(int j= 0;j<n;j++){
        long long int curr = sum-a[j];
        minsum = min(minsum,curr);
        maxsum = max(maxsum,curr);
    }
    cout<<minsum<<" "<<maxsum<<endl;
}
int main()
{
    long int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    vector<long int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
    v.push_back(e);
    minMax(v);
    return 0;
}