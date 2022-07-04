#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;
        n = s.length();
        cin>>s;
        string t = "";
        
        
        for (int i = 0; i < n; i++)
        {
            s[i] = toupper(s[i]);
            if (s[i] == 'U'){
                t += 'D';
            }
            else if (s[i] == 'D'){
                t += 'U';
            }
            else {
                t += s[i];
            }
            cout<<t;
        }
        
        
        
    }
    return 0;
}