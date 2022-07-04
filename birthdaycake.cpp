#include <bits/stdc++.h>
using namespace std;
int birthdayCakeCandles(int arr[],int n){
    int Max = arr[0],count  = 0;
    for(int i = 0;i<n;i++){
        Max = max(Max,arr[i]);
    }
    for(int i = 0;i<n;i++){
        if (Max == arr[i])
        {
            count+=1;
        }
    }

    return count;
}
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    cout<<birthdayCakeCandles(a,n)<<endl;
    
    return 0;
}