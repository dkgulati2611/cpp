#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pi (3.141592653589)
#define mod 1e9+7
#define ill int long long
#define vi vector<int>
#define vf vector<float>
#define vc vector<char>
#define db double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define minn(a, b, c) min(c, min(a, b))
#define mini(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define repp(j,i,n) for(int j = i;j<n;j++)

int getmax(int arr[],int n){
    int ans=arr[0];
    repp(i,1,n)
    {
        if(arr[i]>ans) ans=arr[i];
    }
    return ans;
}

void countsort(int arr[],int n,int pos){
    int count[10]={0};
    int b[n];
    rep(i,n)
    {
        ++count[(arr[i]/pos)%(10)];
    }
    repp(i,1,10)
    {
        count[i]=count[i]+count[i-1];
    }
    int j;
    rrep(i,n)
    {
        j=(arr[i]/pos)%(10);
        b[--count[j]]=arr[i];
    }
    rep(i,n)
    {
        arr[i]=b[i];
    }
}

void radixsort(int arr[],int n){
    int max= getmax(arr,n);
    for (int pos = 1; max/pos > 0; pos=pos*10)
    {
        countsort(arr,n,pos);
    }
}
int main()
{
    fastio();
    int n;
    cin>>n;
    int arr[n];
    rep(i,n)
    {
        cin>>arr[i];
    }
    radixsort(arr,n);

    rep(i,n)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}