#include <iostream>
#include <cmath>
using namespace std;

bool check(int a, int b, int c){
    int p = max(a,max(b,c));
    int q,r;
    if (p == a){
        q= b;
        r = c;
    }
    else if (p == b){
        q = c;
        r = a;
    }
    else {
        q = a;
        r = b;
    }
    if (p*p == q*q + r*r)
        return true;

    else 
        return false;
    
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if (check(a,b,c)){
        cout<<"pythogorean triplet"<<endl;
    }
    else {
        cout<<"not a pythogorean triplet"<<endl;
    }

    return 0;
}
