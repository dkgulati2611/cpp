#include <iostream>
using namespace std;
int main()
{
    int n, revno = 0, r;
    cin >> n;

    int temp = n;
    while (n != 0)
    {
        r = n % 10;
        revno = revno * 10 + r;
        n /= 10;
    }
    cout << revno << endl;
    if (temp==revno){
        cout<<"palindrome";
    }
    else {
        cout<<"not palindrome";
    }

    return 0;
}
