class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n==0||n==1)
            return n;
        int i=0;
        int k=0;
        int j=1;
        while(j<n)
        {
            if(nums[k]==nums[j])
                ++j;
            else
            {
                nums[i+1]=nums[j];
                ++i;
                k=j;
                j++;
            }
        }
        return i+1;
    }
};