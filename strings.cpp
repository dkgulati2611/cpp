#include <iostream>
#include <string>
using namespace std;
int main()
{
    // string str;
    // string str1(5, 'n');
    // string str2 = "i am silent knight";
    string str;
    getline(cin,str);
    // cin does not print blank spaces 
    // forex - for a sentence in cin cout will be only first word before white space
    // cin>>str;
    cout<<str<<endl;

    // string s1 = "fam";
    // string s2 = "ily";
    // cout<<s1+s2<<endl;
    // string is zero based indexing
    // cout<<s1.append(s2)<<endl;
    // str.clear();
    string s = str.substr(6,4); // sub string from 6 index upto four element.

    cout<<s<<endl;
    str.erase(5,1);
    cout<<str<<endl;
    return 0;
}

