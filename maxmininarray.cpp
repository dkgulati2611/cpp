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
    int maximum = array[0];
    int minimum =array[0];
    for (int i = 0; i < n ; i++)
    {
        if (array[i]> array[0]) 
        {
            maximum = array[i];
        }
        
        if (array[i]< array[0]){
            minimum = array[i];
        }
    }
    cout<<maximum<<endl;
    cout<<minimum<<endl;
    
    return 0;
}