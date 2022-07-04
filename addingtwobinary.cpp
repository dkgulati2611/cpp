#include <iostream>
using namespace std;
int rev(int n)
{
    int rn = 0, remainder;
    while (n != 0)
    {
        remainder = n % 10;
        rn = rn * 10 + remainder;
        n /= 10;
    }
    return rn;
}
int addbinary(int a, int b)
{
    int ans = 0;
    int previouscarry = 0;
    while (a != 0 && b != 0)
    {
        if (a % 2 == 0 && b % 2 == 0)
        {
            ans = ans * 10 + previouscarry;
            previouscarry = 0;
        }
        else if ((a % 2 == 0 && b % 2 == 1) || (a % 2 == 1 && b % 2 == 0))
        {
            if (previouscarry == 0)
            {
                ans = ans * 10 + 1;
                previouscarry = 0;
            }
            else
            {
                ans = ans * 10 + 0;
                previouscarry = 1;
            }
        }
        else
        {
            ans = ans * 10 + previouscarry;
            previouscarry = 1;
        }
        a /= 10;
        b /= 10;
    }
    while (a > 0)
    {
        if (previouscarry == 1)
        {
            if (a % 2 == 1)
            {
                ans = ans * 10 + 0;
                previouscarry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                previouscarry = 0;
            }
        }
        else
        {
            ans = ans * 10 + (a % 2);
        }
        a /= 10;
    }
    while (b > 0)
    {
        if (previouscarry == 1)
        {
            if (b % 2 == 1)
            {
                ans = ans * 10 + 0;
                previouscarry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                previouscarry = 0;
            }
        }
        else
        {
            ans = ans * 10 + (b % 2);
        }
        b /= 10;
    }
    if (previouscarry == 1)
    {
        ans = ans * 10 + 1;
    }

    ans = rev(ans);
    return ans;
}
int main()
{
    cout << "HELLO C++ PROGRAMMING" << endl;
    ;
    int a, b;
    cin >> a >> b;
    cout << addbinary(a, b) << endl;
    return 0;
}
