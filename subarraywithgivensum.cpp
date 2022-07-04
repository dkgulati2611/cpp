#include <iostream>
using namespace std;
int main(){
    int n,sum;
    cin>>n>>sum;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int s=-1,e= -1,i=0,j=0,s1 = 0;
    while (j<n && s1+a[j]<=sum)
    {
        s1 += a[j];
        j++;
    }
    if (s1==sum)
    {
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }
    while (j<n)
    {
        s1+=a[j];
        while(s1>sum){
            s1-=a[i];
            i++;
        }
        if (s1==sum){
            s= i+1;
            e = j+1;
            break;
        }
        j++;
    }
    cout<<s<<" "<<e<<endl;
    
    return 0;
    
}