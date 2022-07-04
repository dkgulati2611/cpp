#include <bits/stdc++.h>
using namespace std;

string findSmallestNumberPossible(int N)
{
    if (N > 45) {
        return "-1";
    }
    string res = "";
    int count = 0;
    for (int i = 9; i >= 1;) {
        if (count == 1) {
            i--;
            count = 0;
        }
        if (N > i) {
            N -= i;
            res += (char)48 + i;
        }
        else {
            res += (char)N + 48;
            N = 0;
            break;
        }        
        count++;
    }
    reverse(res.begin(),res.end());
    return res;
}
int main(){
    int N;
    cin>>N;
    
    string ans = findSmallestNumberPossible(N);
    if(ans == "-1"){
        cout<<"Not Possible"<<endl;
    }
    else{
        cout<<ans<<endl;
    }
 
    return 0;
}