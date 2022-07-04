#include <iostream>
using namespace std;

int getbit(int n, int pos)   //get the bit at given position
{
    return ((n & (1<<pos))!=0);
}
int setbit(int n, int pos)  //set bit is to set 1 at the given position
{                           //unset means to set 0 at the given position
    return (n | (1<<pos));
}
int clearbit(int n, int pos)  //clear bit it to clear the bit at given position
{
    return (n & ~(1<<pos));
}
int updatebit(int n, int pos, int value)   //update the bit at given position
{
    int mask = ~(1<<pos);
    n = n & mask;
    return (n | (value<<pos));
}
int main()
{
    cout<<getbit(5,1)<<endl;
    // cout<<setbit(5,1)<<endl;
    // cout<<clearbit(5,2)<<endl;
    // cout<<updatebit(5,1,1)<<endl;

    return 0;

}