/*
https://practice.geeksforgeeks.org/problems/convert-a-list-of-characters-into-a-string5142

*/
class Solution{
    public:
    string chartostr(char arr[] , int n)
    {
        //code here
        string str;
        for(int i=0;i<n;i++)
        {
            str=str+arr[i];
        }
        
        return str;
    }
};