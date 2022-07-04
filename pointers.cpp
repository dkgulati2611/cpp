#include<iostream>
using namespace std;
int main()
{
    // int a= 10;
    // int *ptr = &a;
    // cout<< ptr <<endl;
    // *ptr = 20;
    // cout<<a<<endl;
    int arr[] = {10,20,30};
    cout<<*arr;
    int *ptr = arr;
    for (int i = 0; i < 3; i++)
    {
        cout<<*(arr + i);
    }
    


    return 0;
}