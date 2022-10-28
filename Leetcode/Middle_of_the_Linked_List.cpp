/*
https://leetcode.com/problems/middle-of-the-linked-list/
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        
        return slow;
        
        
    }

    class Solution 
{
public:
    string intToRoman(int num) 
    {
        vector<pair<int, string>> roman = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"},
                                         {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"},
                                         {5, "V"}, {4, "IV"}, {1, "I"}};
        
        string res="";
        
        for(auto it:roman)
        {
            while(num >= it.first)
            {
                res += it.second;
                num -= it.first;
            }
        }
        return res;
    }
};
};