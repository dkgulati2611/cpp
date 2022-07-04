#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    set<int> s;
    set<int>::iterator itr;
    cin >> t;
    while (t--)
    {
        int k, x;
        cin >> k >> x;
        int length = s.size();
        switch (k)
        {
            case 1:
            s.insert(x);
            break;
            case 2:
                s.erase(x);
                break;
            case 3:
                itr =s.find(x);
                if(itr != s.end()){
                    cout<<"Yes"<<endl;
                }
                else{
                    cout<<"No"<<endl;
                }
                break;
        }
    }
    return 0;
}
