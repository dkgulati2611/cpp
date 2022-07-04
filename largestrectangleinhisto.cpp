#include <bits/stdc++.h>
using namespace std;
int getmaxarea(vector <int> a){
    int n = a.size(),ans =0;int i =0;
    a.push_back(0);
    stack <int> st;
    while (i<n)
    {
        while (!st.empty() and a[st.top()] > a[i])
        {
            int t = st.top();
            int h = a[t]; 
            st.pop();
            if (st.empty())
            {
                ans = max(ans,h*i);
            }
            else {
                int len  = i - st.top() - 1;
                ans = max(ans, h*len);
            }
        }
        st.push(i);
        i++;
    }
    return ans;
    
}
int main()
{
    vector <int> a = {2,1,5,6,2,3};
    int n = a.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int minh = 99999;
        for (int j = i; j < n; j++)
        {
            minh = min(a[j], minh);
            int len = j-i+1;
            ans = max(ans,len*minh);
        }
        
    }
    cout<<ans<<endl;
    //method 2
    cout<<getmaxarea(a);
    
    return 0;
}