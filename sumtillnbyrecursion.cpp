#include <iostream>
using namespace std;
int sum(int n){
    if (n==0){
        return 0;
    }
    int presum = n+sum(n-1);
    return presum;
}
int main()
{
    int n;
    cin >> n;
    cout<< sum(n)<<endl;;

    return 0;
}