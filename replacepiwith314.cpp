#include <iostream>
using namespace std;

string replacepi(string s){
    if (s.length()==0 || s.length()==1){
        return s;
    }
    if (s[0]=='p' &&s[1] == 'i'){
        return "3.14" + replacepi(s.substr(2));        
    }
    else {
        return s[0] + replacepi(s.substr(1));
    }
}

int main()
{
    string s;
    cin>>s;
    cout<<replacepi(s)<<"\n";
    cout<<replacepi("pibpippiiipipipi");
    return 0;

}