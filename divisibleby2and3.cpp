#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if (a%2==0&&a%3==0)
    {
        cout<<"divisible by 2 and 3 both"<<endl;
    }  
    else if (a%2==0)
    {
        cout<<"divisible by 2 only"<<endl;
    }  
    else if (a%3==0)
    {
        cout<<"divisible by 3 only"<<endl;
    }  
    else {
        cout<<"divisible by none"<<endl;
    }
    
    return 0;
}
