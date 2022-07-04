#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
        
    }
    // cout << "HELLO C++ PROGRAMMING";
    int row_start =0,row_end =n-1,column_start =0,column_end = m-1;
    while (row_start<=row_end&&column_start<=column_end)
    {
        for(int col = column_start;col<= column_end;col++){
            cout<<a[row_start][col]<<" ";
        }
        row_start++;
        cout<<endl;
        for (int row = row_start;row <=row_end; row++)
        {
            cout<<a[row][column_end]<<" ";
        }
        column_end--;
        cout<<endl;

        for (int col = column_end; col >=column_start; col--) 
        {
            cout<<a[row_end][col]<<" ";
        }
        row_end--;
        cout<<endl;

        for (int row = row_end;row >=row_start; row--)
        {
            cout<<a[row][column_start]<<" ";
        }
        column_start++;
        cout<<endl;       
    }
    
    return 0;
}
