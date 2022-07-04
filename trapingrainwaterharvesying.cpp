#include <bits/stdc++.h>
#include <vector>
using namespace std;
int rain_water(vector<int>v)
{
    stack<int> st;
    int n =  v.size();int ans = 0;
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() and v[st.top()]<v[i])
        {
            int cur = st.top();
            st.pop();
            if (st.empty())
            {
                break;
            }
            int diff = i-st.top()-1;
            ans+= (min(v[st.top()],v[i]) - v[cur])*diff; 
            
        }

        st.push(i);
    }
    return ans;

}
int main()
{
    vector<int> a = {0,1,0,2,1,0,1,3,2,1,2,1};
    
    cout<<rain_water(a)<<endl;
}