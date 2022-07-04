#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,r,sum=0,temp=0,c=0;
    cin>>n;
    temp = n;
    while (temp != 0){
        temp/=10;
        c+=1;
    }
    temp = n;
    while (temp != 0)
    {
        r = temp % 10;
        sum += pow(r,c);
        temp /= 10;
    }
    if (sum == n)
    {
        cout<< " an armstrong num"<<endl;
    }
    else {
        cout<< "not an armstrong num"<<endl;

    }   
    return 0;
}
