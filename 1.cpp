
#include <bits/stdc++.h>
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define debug(x) cout << '>' << #x << ':' << x << endl; 
#define ld long double
#define endl "\n";

const int mod = 1000000007;
using namespace std;

bool notprime(string str)
{
    int x=0;
    stringstream geek(str);
    geek>>x;
    if(x==1)
    {
        return true;
    }
    if(x==2 or x==3 or x==5)
    {
        return false;
    } 
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
        {
            return true;
        }
    }
    return false;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test;
    cin >> test;

    while (test--) {
        int k;
        cin>>k;
        
        string str;
        cin>>str;
        int n = str.length();
        bool found = false;
        for(int i=0;i<n;i++)
        {    string x = "";
             x+=str[i];
             if(notprime(x))
             {
                 cout<<1<<endl;
                 cout<<str[i]<<endl;
                 found = true;
                 break;
             }
        }
        
        
        if(found == false)
        {
            for(int i=0;i<n;i++)
            {  if(found==false){
                for(int j=i+1;j<n;j++)
                {
                    string temp="";
                    temp += str[i];
                    temp +=str[j];
                    if(notprime(temp))
                    {
                        cout<<2<<endl;
                        cout<<temp<<endl;
                        found = true;
                        break;
                    }
                }
            }}
        }
        
        if(found == false)
        {
            for(int i=0;i<n;i++)
            {   if(found==false){
                for(int j=i+1;j<n;j++)
                {   if(found==false){
                    for(int k=0;k<n;k++)
                   {if(k!=i and k!=j)
                   {
                    string temp = "";
                    temp += str[i];
                    temp +=str[j];
                    temp += str[k];
                    if(notprime(temp))
                    {
                        cout<<3<<endl;
                        cout<<temp<<endl;
                        found = true;
                        break;
                    }
                   }}
                }}
            }}
        }  
    }
    return 0;
}