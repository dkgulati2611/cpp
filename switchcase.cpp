#include <iostream>
using namespace std;
int main()
{
    char button;
    cout<<"enter a character"<<endl;
    cin>>button;
    switch (button)
    {
    case 'a':
        cout<<"hello";
        break;
    case 'b':
        cout<<"namaste";
        break;
    case 'c':
        cout<<"ciao";
        break;
    case 'd':
        cout<<"salut";
        break;
    default:
    cout<<"i am still learning more.";
        break;
    }
    return 0;
}
