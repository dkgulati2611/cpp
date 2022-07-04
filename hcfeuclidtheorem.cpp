#include <iostream>
using namespace std;
int hcf(int n1,int n2)
{
    while(n2!=0){
        int sub = n1-n2;
        n1 = n2;
        n2 = sub;

    }
    return n1;

}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    cout<<hcf(n1,n2)<<endl;
    return 0;

}