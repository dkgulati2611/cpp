#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1;
    cin >> n1;
    int a[n1];
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }
    int n2;
    cin >> n2;
    int b[n2];
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }
    int n3 = n1 + n2;
    int arr[n3];
    for (int k = 0; k < n3; k++)
    {
        int i = 0;
        int j = 0;
        while (i < n1 && j < n2)
        {
            if (a[i] < b[j])
            {
                arr[k] = a[i];
                k++;
                i++;
            }
            else
            {
                arr[k] = b[j];
                k++;
                j++;
            }
        }
        while (i < n1)
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        while (j < n2)
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    cout << "Merged array is: " << endl;
    for (int i = 0; i < n3; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}