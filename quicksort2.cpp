#include <iostream>
using namespace std;
 
int partition(int arr[],int l,int r)
{
    int mid = (l+r)/2;

    int pivot = arr[mid];
    int i = l,j = r;
    while (i<=j)
    {   
       while(arr[i] < pivot)
        {i++;}

       while(arr[j] > pivot)
       {j--;}
       
        if(i<=j)
        {swap(arr[i],arr[j]);
        i++;
        j--;}
    }
    // for(int k = l;k<=r;k++){
    //     cout<<arr[k]<<" ";
    // }cout<<endl;
      
    return i;

}
void quicksort(int arr[],int l,int r)
{
    if(l<r){
        int pi = partition(arr,l,r);
        //  if (l < pi)

            quicksort(arr, l, pi - 1);

        //  if (pi < r)

            quicksort(arr, pi, r);
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
    
    return 0;
}