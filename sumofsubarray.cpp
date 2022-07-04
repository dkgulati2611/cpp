#include<iostream>
using namespace std;
int main()
{
    int n,sum = 0;
    int a[n];
    cout<<"size of array:";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum+= a[j];
            cout<<sum<<endl;
        }
        
    }
    
    return 0;
}