class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    
    if( nums.size()<2 || k%nums.size()==0)
    {
        return;
    }
        
     int arr[nums.size()-k];
     k%=nums.size();
        int count=0;
    for(int i=0;i<nums.size()-k;i++)
    {
        arr[count]=nums[i];
        count++;
    }
     count=0;
    for(int i=nums.size()-k;i<nums.size();i++)
    {
        nums[count]=nums[i];
        count++;
    }
         count=0;
    for(int i=k;i<nums.size();i++)
    {
        nums[i]=arr[count];
        count++;
    }
    
    }
    };

    class Solution {
    public void rotate(int[] nums, int k) {
        if(nums == null || nums.length < 2 || k%nums.length == 0)
            return;    
        k = k % nums.length;
        reverse(nums, 0, nums.length - k - 1);
        reverse(nums, nums.length - k, nums.length - 1);
        reverse(nums, 0, nums.length - 1);
    }

    private void reverse(int[] nums, int i, int j){
        int tmp = 0;       
        while(i < j){
            tmp = nums[i];
            nums[i] = nums[j];
            nums[j] = tmp;
            i++;
            j--;
        }
    }
}
    

