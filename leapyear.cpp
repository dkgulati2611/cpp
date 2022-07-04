#include <iostream>
using namespace std;
int main()
{
    int year;
    cin>> year;
    if (year%100 == 0){
        if (year%400==0){
            cout<< "leap year" <<endl;
        }
        else{
            cout<<"not a leap year"<< endl;
        }
    }
    else if (year%4 ==0){
        cout<< "leap year" <<endl;
    }
    else {
        cout<<"not a leap year"<< endl;
    }

    return 0;
}
