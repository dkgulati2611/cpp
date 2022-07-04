#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s1 = "jedkwejdbklsbbjkql";
    int frq[26];
    for (int i = 0; i < 26; i++)
    {
        frq[i] = 0;
    }
    for (int i = 0; i < s1.size(); i++)
    {
        frq[s1[i]- 'a']++;
    }
    char ans = 'a';
    int maxf = 0;
    for (int i = 0; i < 26; i++)
    {
        if (frq[i]>maxf){
            maxf = frq[i];
            ans = i+'a';
        }
    }
    cout<<maxf<<endl;
    cout<<ans<<endl;    

    
    
    return 0;
}