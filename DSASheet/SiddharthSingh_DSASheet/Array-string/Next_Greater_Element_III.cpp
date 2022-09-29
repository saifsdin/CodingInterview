/*
https://leetcode.com/problems/next-greater-element-iii/

*/

#include <bits/stdc++.h>
using namespace std;
 int nextGreaterElement(int n) {
   string s = to_string(n);
        int i, j;
        
        for(i=s.size() - 2; i>=0; i--)
        { 
        
        if(s[i] < s[i + 1])
         break;
        }
        if(i == -1) 
        {
            return -1;
        }
        
        for(j=s.size()-1; j>i; j--) 
        {
           
            if(s[j] > s[i]) break;
        }
        swap(s[i], s[j]);
        reverse(s.begin() + i + 1, s.end());
        
        return stol(s) > INT_MAX ? -1 : stol(s);
    }
int main() {
    cout<<nextGreaterElement(123);
}