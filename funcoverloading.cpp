#include<iostream>
using namespace std;
class apnaclg{
    public:
    void fun(){
        cout<<"1 am a function with no argument"<<endl;
    }
    void fun(int x){

        cout<<"1 am a function with int argument"<<endl;
    }
    void fun(double x)
    {
        cout<<"1 am a function with double argument"<<endl;

    }   
};
int main(){
    apnaclg obj;
    obj.fun();
    obj.fun(4);
    obj.fun(6.2);
}