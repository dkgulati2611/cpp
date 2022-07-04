#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,q;
    cin>>n>>q;
    vector<vector<int>> a;
    int k;
    while(n--){
    vector<int> vec;
    for(int j = 0;j<k;j++){
        int val;
        cin>>val;
        vec.push_back(val);
    }           
    a.push_back(vec);
    }
    int row,col;
    for(int i = 0;i<q;i++){
        cin>>row>>col;
        cout<<a[row][col]<<endl;
    }
      
    return 0;
}