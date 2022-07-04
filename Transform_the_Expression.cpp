#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pi (3.141592653589)
#define mod 1e9+7
#define ll long long
#define vi vector<int>
#define vf vector<float>
#define vc vector<char>
#define db double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define minn(a, b, c) min(c, min(a, b))
#define mini(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define repp(j,i,n) for(int j = i;j<=n;j++)
int precedence(char c){
    if (c == '^'){
        return 3;}
    else if (c == '*' || c == '/'){
        return 2;}
    else if (c == '+' || c == '-'){
        return 1;}
    else{
        return -1;}
}
string infixtopostfix(string s){
    stack<char> st;
    string res;
    for (int i = 0; i < s.length(); i++){
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z'){
            res += s[i];}
        else if (s[i] == '('){
            st.push(s[i]);}
        else if (s[i] == ')'){
            while (!st.empty() && st.top() != '('){
                res += st.top();
                st.pop();}
            if (!st.empty()){
                st.pop();}
        }
        else{
            while (!st.empty() && precedence(st.top()) > precedence(s[i])){
                res += st.top();
                st.pop();}
            st.push(s[i]);}
    }
    while (!st.empty()){
        res += st.top();
        st.pop();}
    return res;
}
int main()
{
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        cout<<infixtopostfix(s)<<endl;
    }
    
    return 0;
}