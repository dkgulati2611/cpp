// a[0]>=a[1]<=a[2]>=a[3]
#include<iostream>
using namespace std;
void swap(int arr[],int l,int h){
    int temp = arr[l];
    arr[l] = arr[h];
    arr[h] = temp;
    
}
void wavesort(int a[],int n)
{
    for (int i = 1; i < n; i+=2)
    {
        if (a[i]>a[i-1]){
            swap(a,i,i-1);
        }
        if (a[i]>a[i+1] && i<= n-2){
            swap(a,i,i+1);
        }
    }
    
}
int main()
{
    int arr[] = {1,3,4,7,5,6,2};
    wavesort(arr,7);
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}