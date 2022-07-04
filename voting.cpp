#include <iostream>
using namespace std;
int main()
{
    int age;
    cin >> age;
    if (age>=18)
    {
        cout << "eligible for voting\n";
    }
    else {
        cout<< "not eligible for voting";
    }
    return 0;
}