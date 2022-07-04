#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char a[n+1];
    cin.getline(a,n);
    cin.ignore();
    int i=0,currlen = 0,maxleen =0;
    int st = 0,maxst =0;
    while (1)
    {
        if (a[i] == ' ' || a[i]=='\0'){
            if (currlen >maxleen){
                maxleen = currlen;
                maxst = st;
            }
            currlen = 0;
            st= i+1;

        }
        else{
            currlen++;
            
        }

        if (a[i] == '\0'){
            break;
        }
        i++;
    }
    cout<<maxleen<<endl;
    for (int i = 0; i < maxleen; i++)
    {
        cout<< a[i+maxst];
    }
    
    return 0;
}