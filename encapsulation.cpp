//hiding sensitive data from the user
#include <iostream>
using namespace std;
class A{
    public:
        int a;
        void funcA(){
            cout<<"funcA"<<endl;
        }
    private:
        int b;
        void funcB(){
            cout<<"funcB"<<endl;
        }

    protected:
        int c;
        void funcC(){
            cout<<"funcC"<<endl;
        }
};
int main(){
    A obj;
    obj.funcA();
    // obj.funcB();
    // obj.funcC();
}