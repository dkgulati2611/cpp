#include <iostream>
using namespace std;
void swap(int arr[],int l,int r){
    int temp = arr[r];
    arr[r] = arr[l];
    arr[l] = temp;
}
int partition(int arr[],int l,int r)
{
    int pivot = arr[l];
    int i = l+1;
    for (int j = l+1; j <= r; j++)
    {
        if (arr[j]<pivot){
            swap(arr,i,j);
            i++;
        } 
    }
    swap(arr,i-1,l);
    // for(int k = l;k<=r;k++){
    //     cout<<arr[k]<<" ";
    // }cout<<endl;
    return (i-1);

}
void quicksort(int arr[],int l,int r)
{
    if (l<r){
        int pi = partition(arr,l,r);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    quicksort(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}