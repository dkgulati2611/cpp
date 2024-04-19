#include<bits/stdc++.h>
using namespace std;

int compareStrings(string s1, string s2) {
    if (s1.length() < s2.length()) {
        return -1;
    } else if (s1.length() > s2.length()) {
        return 1;
    }
    for (int k = 0; k < s1.length(); k++) {
        if ((int) s1.charAt(k) < (int) s2.charAt(k))
            return -1;
        if ((int) s1.charAt(k) > (int) s2.charAt(k))
            return 1;
    }
    return 0;
}
void printArray(vector<string> s) {
    for (string str : s) {
        cout<< str <<endl;
    }
}
int main(){

}