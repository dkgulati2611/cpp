#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int array[n];
    for (int i =0;i<n;i++){
        cin>>array[i];
    }
    for (int i = 0; i < n-1 ; i++)
    {
        int minindex = i;int j;
        for (j = i+1 ; j < n; j++)
        {
            if (array[j]<array[minindex]){
                minindex = j;
            }
        }     
        int temp = array[minindex];
        array[minindex]= array[i];
        array[i] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;

    return 0;
}
    