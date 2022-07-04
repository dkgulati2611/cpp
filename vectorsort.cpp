#include <bits/stdc++.h>
using namespace std;


int main() {
    
    int n,input;
    cin>>n;
    vector <int> v;
    while (n!=0)
    {
        cin>>input;
        v.push_back(input);
        n--;
    }
    sort(v.begin(), v.end());
    for(auto element:v){
        cout<<element<<" ";
    }

    return 0;
}