/*
https://practice.geeksforgeeks.org/batch/dsa-4/track/DSASP-Trie/problem/renaming-cities28581833

*/

//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node{
    bool isEndOfWord;
    int count1;
    map<char, Node *> mp;
};

Node *newNode(){
    Node *temp = new Node();
    temp->isEndOfWord = false;
    // int count1 = 0;
    return temp;
}


// } Driver Code Ends
//User function template for C++

// arr : array of strings
// n : count of the number of strings in the array
class Solution
{
    public:
    struct TrieNode{
        int count;
        bool isEnd;
        TrieNode *children[26];
        
        TrieNode()
        {
            for(int i=0;i<26;i++)
            {
               children[i]=NULL; 
            }
            count=0;
            isEnd=false;
        }
        
        
        
    };
    
    string getAns(string arr,TrieNode *curr)
    {
        bool flag=true;
        string ans="";
        for(char c : arr)
        {
            int idx=c-'a';
            if(curr->children[idx]==NULL)
            {
                curr->children[idx]=new TrieNode();
            }
            curr=curr->children[idx];
            
            if(flag)
            {
                ans+=c;
            }
            if(curr->count==0)
                flag=false;
           curr->count=curr->count+1; 
        }
        
        if(flag && curr->isEnd)
            ans+=" " + to_string(curr->count);
        
        curr->isEnd = true;
        return ans;
        
        
    }
    
    void check(string *arr, int n){
        TrieNode *root = new TrieNode();
        
        for(int i=0;i<n;i++){
            string s = getAns(arr[i],root);
            cout<<s<<endl;
        }
        return;
    }
};




//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string arr[n];
        for(int i = 0;i<n;i++){
            string s;
            cin >> s;
            arr[i] = s;
        }
        Solution obj;
        obj.check(arr,n);
    }
    return 0;
}

// } Driver Code Ends