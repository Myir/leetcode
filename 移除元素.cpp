class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        if(n==1)
        {
            if(nums[0]==val)
                return 0;
            else
                return 1;
        }
        int start=0;
        int end = n-1;
        int cout = n;
        while(start<=end)
        {
            if(nums[start]==val)
            {
                if(nums[end]!=val)
                {
                    --cout;
                    nums[start]=nums[end];
                    --end;
                    ++start;
                }
                else
                {
                    --end;
                    --cout;
                }
            }
            else
                ++start;
        }
        return cout;
        
    }
};