#include <iostream>
using namespace std;
int setbit1(int n, int pos)  //set bit is to set 1 at the given position
{                           //unset means to set 0 at the given position
    return ((n & (1<<pos))!=0);
}
bool getbit(int n, int pos)   //get the bit at given position
{
    return ((n & (1<<pos))!=0);
}
int setbit2(int n, int pos)  //set bit is to set 1 at the given position
{                           //unset means to set 0 at the given position
    return (n | (1<<pos));
}
int unique_one(int arr[],int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^arr[i];
    }
    return xorsum;
}
void unique(int arr[], int n)
{
    int xorsum1 = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum1 = xorsum1 ^ arr[i];

    }
    int setbit = 0;
    int pos = 0;
    int tempxor = xorsum1;
    while(setbit!=1){
        setbit = xorsum1&1;
        pos++;
        xorsum1 = xorsum1 >> 1;
    }
    int newxor =0;
    for (int i = 0; i < n; i++)
    {
        if (setbit1(arr[i],pos -1)){
            newxor = newxor^arr[i];

        }

    }
    cout<<newxor<<endl;
    cout<<(tempxor^newxor )<< endl;
    
     
}
int uniqueintriplet(int arr[],int n){
    int result = 0;
    for (int i = 0; i < 64; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (getbit(arr[j],i)){
                sum++;
            }
        }
        if (sum%3 !=0){
            result = setbit2(result,i);
        }
        


    }
    return result;
    

}  
int main()
{
    // int arr[] =  {1,2,3,4,1,2,3};
    // cout<< unique_one(arr, 7)<<endl;
    // int arr[] = {1,2,3,1,2,3,5,7};
    // unique(arr,8);
    int arr[] = {1,2,3,4,1,2,3,1,2,3};
    cout<< uniqueintriplet(arr,10)<<endl;
    

    return 0;
}