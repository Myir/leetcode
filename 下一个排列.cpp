class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
            return;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                sort(nums.end()+i-n+1, nums.end());
                for(int j=i+1;j<n;j++)
                {
                    if(nums[j]>nums[i])
                    {
                        swap(nums[i],nums[j]);
                        return;
                    }
                }
            }
        }
        sort(nums.begin(),nums.end());
        return;
        
    }
};