#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter order :"<<endl;
    cin>>n>>m;
    int a[n][m],b[n][m],add[n][m];
    cout<<"enter elements of first matrix :"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
        cout<<endl;
        
    }
    cout<<"enter elements of second matrix :"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>b[i][j];
        }
        cout<<endl;
        
    }
    cout<<"sum of two matrix :"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            add[i][j] = a[i][j] + b[i][j];
            cout<<add[i][j]<<" ";
        }
        cout<<endl;
    }
    int sub[n][m];
    cout<<"subraction of two matrix :"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            add[i][j] = a[i][j] - b[i][j];
            cout<<add[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

    
}