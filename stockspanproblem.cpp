#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector <int> stockspan(vector <int> prices){
    vector <int> ans;
    stack<pair<int,int>> s;
    for (auto price :prices)
    {
        int days =1;
        while (!s.empty()  and  s.top().first <= price)
        {
            days += s.top().second;
            s.pop();
        }
        s.push({price,days});
        ans.push_back(days);
        
    }
    return ans;
    
}
int main(){
    int n;
    int days;
/*
//brute force approach
    for (int i = 0; i < n; i++)
    {
	days = 0;
        for (int j =i; j >=0; j--)
        {
            if (prices[i]>= prices[j])
            {
                days++
            }
            else {
                break;
            }
            
        }
        
    }
     cout<<days<<endl;
*/
    vector <int> a = {100,80,60,70,60,75,85};
    vector <int> res = stockspan(a);
    for (auto ele: res)
    {
        cout<<ele<<" ";
    }cout<<endl;
    return 0;
}   