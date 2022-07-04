#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin >>a>>b>>c;

    if (a>b){
        if (a>c){
            cout<<"greater of the three is :"<<a;
        }
        else {
            cout<<"greater of the three is :"<<c;
        }
    }
    else {
        if (b>c){
            cout<<"greater of the three is :"<<b;
        }
        else {
            cout<<"greater of the three is :"<<c;
        }
    }
    return 0;
}



