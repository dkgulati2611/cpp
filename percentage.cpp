#include <iostream>
using namespace std;
int main()
{
    float sub1,sub2,sub3,sub4,sub5;
    cin >> sub1>>sub2>>sub3>>sub4>>sub5;
    float total_sum = sub1+sub2+sub3+sub4+sub5;
    cout << "total marks :" << total_sum<< endl;

    float percentage = total_sum/500*100;
    cout << "percentage obtained: "<<percentage<< endl;
    
    return 0;
}
