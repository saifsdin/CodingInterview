/*
https://leetcode.com/contest/weekly-contest-315/problems/count-subarrays-with-fixed-bounds/

approach: two pointer

check the value in range min and max if it is found means we get subarray
start means if we get any subarray value after that , then subtract the start value
minstart and maxstart here getting min becouse we need to count subarray found within range 
if(minFound && maxFound){
                
                res += (min(minStart,maxStart) - start + 1);
                
}
test case
vector<int> nums={1,1,2,1,1}; min=1 max=1
//vector<int> nums={1,3,5,2,7,5}; min=1 and max=5

*/

#include <bits/stdc++.h>
using namespace std;
long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long res = 0;
        bool minFound = false,maxFound = false;
        int start = 0,minStart = 0,maxStart = 0;
        
        for(int i=0;i<nums.size();i++){
            int num = nums[i];
            
            if(num < minK || num > maxK){
               
                minFound = false;
                maxFound = false;
                start = i+1;
            }
            
            if(num == minK){
                
                minFound  = true;
                minStart = i;
            }
            if(num == maxK){
               
                maxFound = true;
                maxStart = i;
            }
            
            if(minFound && maxFound){
                
                res += (min(minStart,maxStart) - start + 1);
                
            }
        }
        return res;
    }
int main() {

vector<int> nums={1,1,1,1};
int minK=1;
int maxK=1;

cout<<countSubarrays(nums,minK,maxK)<<endl;

}
