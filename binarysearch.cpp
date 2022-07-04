#include<iostream>
using namespace std;
int binarysearch(int arr1[], int n, int key){
        int s=0;
        int e=n;
        while (s<=e)
        {
            int mid = (e+s)/2;
            if (arr1[mid]== key){
                return mid;
            }
            else if(arr1[mid]>key){
                e=mid-1;
            }
            else {
                s= mid+1;
            }
        }
        return -1;
}
int main()
{
    int n;
    cin>>n;

    int array[n];
    for (int i =0;i<n;i++){
        cin>>array[i];
    }
    int key;
    cin>>key;
    cout<<binarysearch(array, n,key)<<endl;

    return 0;
}