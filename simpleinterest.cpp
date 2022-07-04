#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int p,t;
    float r;
    cin >> p>>t>>r;
    float si= p*t*r/100;
    cout <<"simple interest: "<<si<<endl;
    float ci = p*pow((1+r/100),t) - p;
    cout<< "compound interest : "<<ci<<endl;
    return 0;
}
