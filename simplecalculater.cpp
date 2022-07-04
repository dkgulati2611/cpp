#include <iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"enter two number:"<<endl;
    cin>>n1>>n2;
    char c;
    cout<<"enter an operator :"<<endl;
    cin>>c;
    switch (c)
    {
    case '+':
        cout<<n1+n2<<endl;
        break;
    case '-':
        cout<<n1-n2<<endl;
        break;
    case '*':
        cout<<n1*n2<<endl;
        break;
    case '/':
        cout<<n1/n2<<endl;
        break;
    
    default:
    cout<<"enter another operator";
        break;
    }
    return 0;
}

