#include <iostream>
using namespace std;
int main()
{
    int n,mx = -19999;
    int arr[n];
    cout<<"size of array : ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        mx = max(mx,arr[i]);
        cout << mx<<endl;
    }
    return 0;
        
}