#include<bits/stdc++.h>
using namespace std;
int myAtoi(string s) {
        stringstream dk(s);
        int a = 0;
        dk >> a;
        return a;
}
int main(){
    string s;
    cin>>s;
    cout<<myAtoi(s)<<endl;
    return 0;
}