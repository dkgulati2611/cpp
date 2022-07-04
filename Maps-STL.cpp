#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    map<string,int>m;
    map<string,int>::iterator itr;
    int length=m.size();
    int q;cin>>q;
    while(q--){
        string x;
        int k,y;
        cin>>k>>x;
        switch(k){
            case 1:
            cin>>y;
            itr = m.find(x);
            
            if(itr != m.end())
                m[x] += y;
            else
            m.insert(make_pair(x,y));
            break;
            case 2:
            m.erase(x);
            break;
            case 3:              
            if(itr != m.end())
            cout<< m[x]<<endl;
            else {
            cout<< 0 <<endl;
            }
            break;
            
        }
    }
    return 0;
}



