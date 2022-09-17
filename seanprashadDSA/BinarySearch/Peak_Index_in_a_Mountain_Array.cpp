/*
https://leetcode.com/problems/peak-index-in-a-mountain-array/

*/

/*
test case

[3,4,5,1]
[3,5,3,2,0]
[0,1,0]
[0,2,1,0]
[0,10,5,2]

*/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        return peak(arr, 0,arr.size()-1);
    }
    
public:
    int peak(vector<int> arr, int l,int h)
    {
        while(l<=h)
        {
            int mid=(l+h)/2;
            
            if(mid>0 && arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1] )
            {
                return mid;
            }
            else if(arr[mid]<arr[mid+1])
            {
                if(mid>0 && arr[mid-1]<arr[mid])
                {
                   l=mid+1; 
                }
                else
                {
                    l=mid+1;
                }
                
            }
            else
            {
                h=mid-1;
            }
        }
        
        return -1;
    }
};